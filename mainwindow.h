#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <curl/curl.h>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	int getUrl();
	void curlInit();
	void curlDeinit();

public slots:
	void startDownload();

private:
	Ui::MainWindowClass ui;
	std::string m_Url;
	std::string m_Type;
	void * m_EasyCurl;
};
