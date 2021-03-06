#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class About;
}

class About : public QWidget
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();
protected:
    // 解决窗体不正常显示背景图片的问题
    void paintEvent(QPaintEvent *);
    // 实现窗体的可拖动
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
	bool mouseMoveing;
	QPoint lastMousePosition;
private:
    Ui::About *ui;

};

#endif // ABOUT_H
