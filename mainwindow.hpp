/* See LICENSE file for copyright and license details. */

#ifndef __MAINWINDOW_HPP__0E042426_E73E_4382_BC86_DE7F000B57CC
#define __MAINWINDOW_HPP__0E042426_E73E_4382_BC86_DE7F000B57CC

#include <QMainWindow>
#include <QPainterPath>


class QResizeEvent;
class GraphicsNodeView;
class GraphicsNodeScene;


class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();

protected slots:
	void doClear();
	void doDemo();
	void doSave();
	void doLoad();
protected:
	virtual void resizeEvent(QResizeEvent *event);

private:
	void addNodeViews();
	void addFakeContent();

	GraphicsNodeView *_view;
	GraphicsNodeScene *_scene;

	QPainterPath _path;
};

#endif /* __MAINWINDOW_HPP__0E042426_E73E_4382_BC86_DE7F000B57CC */

