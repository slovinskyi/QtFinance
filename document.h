#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "qcustomplot.h"
#include <QObject>
#include <QVariant>
#include <QPainter>
#include <QTextObjectInterface>
#include <QPicture>


class Document : public QObject, public QTextObjectInterface
{

    Q_OBJECT
    Q_INTERFACES(QTextObjectInterface)
public:
    enum {PlotTextFormat = QTextFormat::UserObject + 3902 };
    enum {PicturePropertyId = 1 };

    explicit Document(QObject *parent = 0);
    QSizeF intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format);
    void drawObject(QPainter *painter, const QRectF &rect, QTextDocument *doc, int posInDocument, const QTextFormat &format);

    static QTextCharFormat generatePlotFormat(QCustomPlot *plot, int width=0, int height=0);
};
Q_DECLARE_METATYPE(QPicture)

#endif // DOCUMENT_H
