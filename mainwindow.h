/*
   “Copyright 2015 Адаменко Михаил”

    This file is part of Alizee.

    Foobar is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Alizee.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stdafx.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_action_exit_triggered();

    void on_action_about_triggered();

public slots:

    void processFrameAndUpdateGUI();

    void displayAndUpdateRectangle();

private:
    Ui::MainWindow *ui;

    cv::Mat matOriginal;

    cv::VideoCapture capWebcam;

    cv::Mat eye_tpl;
    cv::Rect eye_bb;

    QImage qimgOriginal;

    QTimer* tmrTimer;
};


#endif // MAINWINDOW_H