/* See LICENSE file for copyright and license details. */

#ifndef __GRAPHICSNODESCENE_HPP__7F9E4C1E_8F4E_4BD2_BDF7_3D4ECEC206B5
#define __GRAPHICSNODESCENE_HPP__7F9E4C1E_8F4E_4BD2_BDF7_3D4ECEC206B5

#include <QRectF>
#include <QGraphicsScene>

class GraphicsNode;
class GraphicsDirectedEdge;

class GraphicsNodeScene : public QGraphicsScene
{
	Q_OBJECT

public:
	GraphicsNodeScene(QObject *parent);
	void addItem(GraphicsNode*n);
	void addItem(GraphicsDirectedEdge*e);
	void removeItem(GraphicsNode*n);
	void removeItem(GraphicsDirectedEdge*e);
	void clear();

protected:
	virtual void drawBackground(QPainter *painter, const QRectF &rect) override;

private:
	QColor _color_background;
	QColor _color_light;
	QColor _color_dark;
	QColor _color_null;

	QPen _pen_light;
	QPen _pen_dark;
	QPen _pen_null;

	QBrush _brush_background;

	QList<GraphicsNode*> nodes;
	QList<GraphicsDirectedEdge*> edges;
};

#endif /* __GRAPHICSNODESCENE_HPP__7F9E4C1E_8F4E_4BD2_BDF7_3D4ECEC206B5 */

