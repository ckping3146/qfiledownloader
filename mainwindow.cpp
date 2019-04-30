#include "mainwindow.h"
#include <qdebug.h>
#include <curl/curl.h>
#include <string>
#include <iostream>
#include <functional>
#include <qurl.h>

using namespace std;

bool all_ascii(QString str) {
	return all_of(str.begin(), str.end(), [](QChar c) { return c >= 0 && c <= 127; });
}

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent),
	m_Url(""),
	m_EasyCurl(0)
{
	ui.setupUi(this);
	curlInit();
}

int MainWindow::getUrl()
{
	QString qurl = ui.urlEdit->toPlainText();
	// 检查是否全部是asc字符
	if (!all_ascii(qurl)) {
		cout << "Not all of them ascii ." << endl;
		return -1;
	}

	m_Url = qurl.toStdString();
	if (m_Url.empty()) return -1;

	// 获取文件后缀
	size_t pos = m_Url.rfind('.');
	//cout << "pos = " << pos << endl;
	if (pos >= m_Url.length()) return -1; // not a corrct url
	m_Type = m_Url.substr(pos);
	//cout << "fileType = " << m_Type << endl;

	cout << "cur url is: " << m_Url << endl;

	return 0;
}

void MainWindow::curlInit()
{
	curl_global_init(CURL_GLOBAL_WIN32);
	m_EasyCurl = curl_easy_init();
}

void MainWindow::curlDeinit()
{
	curl_easy_cleanup(m_EasyCurl);
	curl_global_cleanup();
}

void MainWindow::startDownload() {
	int ret = getUrl();
	if (0 != ret) {
		cout << "Url is invalid!" << endl;
		ui.statusBar->showMessage("Url is invalid!");
		return;
	}
	ui.statusBar->clearMessage();
}