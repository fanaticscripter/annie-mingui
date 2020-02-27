

#define protected public
#define private public

#include "moc.h"
#include "_cgo_export.h"

#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextEdit>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>

#ifdef QT_QML_LIB
	#include <QQmlEngine>
#endif


class PlainTextEditb1a9c9: public QPlainTextEdit
{
Q_OBJECT
public:
	PlainTextEditb1a9c9(QWidget *parent = Q_NULLPTR) : QPlainTextEdit(parent) {qRegisterMetaType<quintptr>("quintptr");PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType();PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaTypes();callbackPlainTextEditb1a9c9_Constructor(this);};
	PlainTextEditb1a9c9(const QString &text, QWidget *parent = Q_NULLPTR) : QPlainTextEdit(text, parent) {qRegisterMetaType<quintptr>("quintptr");PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType();PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaTypes();callbackPlainTextEditb1a9c9_Constructor(this);};
	 ~PlainTextEditb1a9c9() { callbackPlainTextEditb1a9c9_DestroyPlainTextEdit(this); };
	void appendHtml(const QString & html) { QByteArray* t950a39 = new QByteArray(html.toUtf8()); Moc_PackedString htmlPacked = { const_cast<char*>(t950a39->prepend("WHITESPACE").constData()+10), t950a39->size()-10, t950a39 };callbackPlainTextEditb1a9c9_AppendHtml(this, htmlPacked); };
	void appendPlainText(const QString & text) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackPlainTextEditb1a9c9_AppendPlainText(this, textPacked); };
	void Signal_BlockCountChanged(int newBlockCount) { callbackPlainTextEditb1a9c9_BlockCountChanged(this, newBlockCount); };
	bool canInsertFromMimeData(const QMimeData * source) const { return callbackPlainTextEditb1a9c9_CanInsertFromMimeData(const_cast<void*>(static_cast<const void*>(this)), const_cast<QMimeData*>(source)) != 0; };
	void centerCursor() { callbackPlainTextEditb1a9c9_CenterCursor(this); };
	void changeEvent(QEvent * e) { callbackPlainTextEditb1a9c9_ChangeEvent(this, e); };
	void clear() { callbackPlainTextEditb1a9c9_Clear(this); };
	void contextMenuEvent(QContextMenuEvent * event) { callbackPlainTextEditb1a9c9_ContextMenuEvent(this, event); };
	void copy() { callbackPlainTextEditb1a9c9_Copy(this); };
	void Signal_CopyAvailable(bool yes) { callbackPlainTextEditb1a9c9_CopyAvailable(this, yes); };
	QMimeData * createMimeDataFromSelection() const { return static_cast<QMimeData*>(callbackPlainTextEditb1a9c9_CreateMimeDataFromSelection(const_cast<void*>(static_cast<const void*>(this)))); };
	void Signal_CursorPositionChanged() { callbackPlainTextEditb1a9c9_CursorPositionChanged(this); };
	void cut() { callbackPlainTextEditb1a9c9_Cut(this); };
	void dragEnterEvent(QDragEnterEvent * e) { callbackPlainTextEditb1a9c9_DragEnterEvent(this, e); };
	void dragLeaveEvent(QDragLeaveEvent * e) { callbackPlainTextEditb1a9c9_DragLeaveEvent(this, e); };
	void dragMoveEvent(QDragMoveEvent * e) { callbackPlainTextEditb1a9c9_DragMoveEvent(this, e); };
	void dropEvent(QDropEvent * e) { callbackPlainTextEditb1a9c9_DropEvent(this, e); };
	void focusInEvent(QFocusEvent * e) { callbackPlainTextEditb1a9c9_FocusInEvent(this, e); };
	bool focusNextPrevChild(bool next) { return callbackPlainTextEditb1a9c9_FocusNextPrevChild(this, next) != 0; };
	void focusOutEvent(QFocusEvent * e) { callbackPlainTextEditb1a9c9_FocusOutEvent(this, e); };
	void inputMethodEvent(QInputMethodEvent * e) { callbackPlainTextEditb1a9c9_InputMethodEvent(this, e); };
	QVariant inputMethodQuery(Qt::InputMethodQuery property) const { return *static_cast<QVariant*>(callbackPlainTextEditb1a9c9_InputMethodQuery(const_cast<void*>(static_cast<const void*>(this)), property)); };
	void insertFromMimeData(const QMimeData * source) { callbackPlainTextEditb1a9c9_InsertFromMimeData(this, const_cast<QMimeData*>(source)); };
	void insertPlainText(const QString & text) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackPlainTextEditb1a9c9_InsertPlainText(this, textPacked); };
	void keyPressEvent(QKeyEvent * e) { callbackPlainTextEditb1a9c9_KeyPressEvent(this, e); };
	void keyReleaseEvent(QKeyEvent * e) { callbackPlainTextEditb1a9c9_KeyReleaseEvent(this, e); };
	QVariant loadResource(int ty, const QUrl & name) { return *static_cast<QVariant*>(callbackPlainTextEditb1a9c9_LoadResource(this, ty, const_cast<QUrl*>(&name))); };
	void Signal_ModificationChanged(bool changed) { callbackPlainTextEditb1a9c9_ModificationChanged(this, changed); };
	void mouseDoubleClickEvent(QMouseEvent * e) { callbackPlainTextEditb1a9c9_MouseDoubleClickEvent(this, e); };
	void mouseMoveEvent(QMouseEvent * e) { callbackPlainTextEditb1a9c9_MouseMoveEvent(this, e); };
	void mousePressEvent(QMouseEvent * e) { callbackPlainTextEditb1a9c9_MousePressEvent(this, e); };
	void mouseReleaseEvent(QMouseEvent * e) { callbackPlainTextEditb1a9c9_MouseReleaseEvent(this, e); };
	void paintEvent(QPaintEvent * e) { callbackPlainTextEditb1a9c9_PaintEvent(this, e); };
	void paste() { callbackPlainTextEditb1a9c9_Paste(this); };
	void redo() { callbackPlainTextEditb1a9c9_Redo(this); };
	void Signal_RedoAvailable(bool available) { callbackPlainTextEditb1a9c9_RedoAvailable(this, available); };
	void resizeEvent(QResizeEvent * e) { callbackPlainTextEditb1a9c9_ResizeEvent(this, e); };
	void scrollContentsBy(int dx, int dy) { callbackPlainTextEditb1a9c9_ScrollContentsBy(this, dx, dy); };
	void selectAll() { callbackPlainTextEditb1a9c9_SelectAll(this); };
	void Signal_SelectionChanged() { callbackPlainTextEditb1a9c9_SelectionChanged(this); };
	void setPlainText(const QString & text) { QByteArray* t372ea0 = new QByteArray(text.toUtf8()); Moc_PackedString textPacked = { const_cast<char*>(t372ea0->prepend("WHITESPACE").constData()+10), t372ea0->size()-10, t372ea0 };callbackPlainTextEditb1a9c9_SetPlainText(this, textPacked); };
	void showEvent(QShowEvent * vqs) { callbackPlainTextEditb1a9c9_ShowEvent(this, vqs); };
	void Signal_TextChanged() { callbackPlainTextEditb1a9c9_TextChanged(this); };
	void undo() { callbackPlainTextEditb1a9c9_Undo(this); };
	void Signal_UndoAvailable(bool available) { callbackPlainTextEditb1a9c9_UndoAvailable(this, available); };
	void Signal_UpdateRequest(const QRect & rect, int dy) { callbackPlainTextEditb1a9c9_UpdateRequest(this, const_cast<QRect*>(&rect), dy); };
	void wheelEvent(QWheelEvent * e) { callbackPlainTextEditb1a9c9_WheelEvent(this, e); };
	void zoomIn(int ran) { callbackPlainTextEditb1a9c9_ZoomIn(this, ran); };
	void zoomOut(int ran) { callbackPlainTextEditb1a9c9_ZoomOut(this, ran); };
	bool event(QEvent * event) { return callbackPlainTextEditb1a9c9_Event(this, event) != 0; };
	QSize minimumSizeHint() const { return *static_cast<QSize*>(callbackPlainTextEditb1a9c9_MinimumSizeHint(const_cast<void*>(static_cast<const void*>(this)))); };
	void setupViewport(QWidget * viewport) { callbackPlainTextEditb1a9c9_SetupViewport(this, viewport); };
	QSize sizeHint() const { return *static_cast<QSize*>(callbackPlainTextEditb1a9c9_SizeHint(const_cast<void*>(static_cast<const void*>(this)))); };
	bool viewportEvent(QEvent * event) { return callbackPlainTextEditb1a9c9_ViewportEvent(this, event) != 0; };
	QSize viewportSizeHint() const { return *static_cast<QSize*>(callbackPlainTextEditb1a9c9_ViewportSizeHint(const_cast<void*>(static_cast<const void*>(this)))); };
	void actionEvent(QActionEvent * event) { callbackPlainTextEditb1a9c9_ActionEvent(this, event); };
	bool close() { return callbackPlainTextEditb1a9c9_Close(this) != 0; };
	void closeEvent(QCloseEvent * event) { callbackPlainTextEditb1a9c9_CloseEvent(this, event); };
	void Signal_CustomContextMenuRequested(const QPoint & pos) { callbackPlainTextEditb1a9c9_CustomContextMenuRequested(this, const_cast<QPoint*>(&pos)); };
	void enterEvent(QEvent * event) { callbackPlainTextEditb1a9c9_EnterEvent(this, event); };
	bool hasHeightForWidth() const { return callbackPlainTextEditb1a9c9_HasHeightForWidth(const_cast<void*>(static_cast<const void*>(this))) != 0; };
	int heightForWidth(int w) const { return callbackPlainTextEditb1a9c9_HeightForWidth(const_cast<void*>(static_cast<const void*>(this)), w); };
	void hide() { callbackPlainTextEditb1a9c9_Hide(this); };
	void hideEvent(QHideEvent * event) { callbackPlainTextEditb1a9c9_HideEvent(this, event); };
	void initPainter(QPainter * painter) const { callbackPlainTextEditb1a9c9_InitPainter(const_cast<void*>(static_cast<const void*>(this)), painter); };
	void leaveEvent(QEvent * event) { callbackPlainTextEditb1a9c9_LeaveEvent(this, event); };
	void lower() { callbackPlainTextEditb1a9c9_Lower(this); };
	int metric(QPaintDevice::PaintDeviceMetric m) const { return callbackPlainTextEditb1a9c9_Metric(const_cast<void*>(static_cast<const void*>(this)), m); };
	void moveEvent(QMoveEvent * event) { callbackPlainTextEditb1a9c9_MoveEvent(this, event); };
	bool nativeEvent(const QByteArray & eventType, void * message, long * result) { return callbackPlainTextEditb1a9c9_NativeEvent(this, const_cast<QByteArray*>(&eventType), message, result) != 0; };
	QPaintEngine * paintEngine() const { return static_cast<QPaintEngine*>(callbackPlainTextEditb1a9c9_PaintEngine(const_cast<void*>(static_cast<const void*>(this)))); };
	void raise() { callbackPlainTextEditb1a9c9_Raise(this); };
	void repaint() { callbackPlainTextEditb1a9c9_Repaint(this); };
	void setDisabled(bool disable) { callbackPlainTextEditb1a9c9_SetDisabled(this, disable); };
	void setEnabled(bool vbo) { callbackPlainTextEditb1a9c9_SetEnabled(this, vbo); };
	void setFocus() { callbackPlainTextEditb1a9c9_SetFocus2(this); };
	void setHidden(bool hidden) { callbackPlainTextEditb1a9c9_SetHidden(this, hidden); };
	void setStyleSheet(const QString & styleSheet) { QByteArray* t728ae7 = new QByteArray(styleSheet.toUtf8()); Moc_PackedString styleSheetPacked = { const_cast<char*>(t728ae7->prepend("WHITESPACE").constData()+10), t728ae7->size()-10, t728ae7 };callbackPlainTextEditb1a9c9_SetStyleSheet(this, styleSheetPacked); };
	void setVisible(bool visible) { callbackPlainTextEditb1a9c9_SetVisible(this, visible); };
	void setWindowModified(bool vbo) { callbackPlainTextEditb1a9c9_SetWindowModified(this, vbo); };
	void setWindowTitle(const QString & vqs) { QByteArray* tda39a3 = new QByteArray(vqs.toUtf8()); Moc_PackedString vqsPacked = { const_cast<char*>(tda39a3->prepend("WHITESPACE").constData()+10), tda39a3->size()-10, tda39a3 };callbackPlainTextEditb1a9c9_SetWindowTitle(this, vqsPacked); };
	void show() { callbackPlainTextEditb1a9c9_Show(this); };
	void showFullScreen() { callbackPlainTextEditb1a9c9_ShowFullScreen(this); };
	void showMaximized() { callbackPlainTextEditb1a9c9_ShowMaximized(this); };
	void showMinimized() { callbackPlainTextEditb1a9c9_ShowMinimized(this); };
	void showNormal() { callbackPlainTextEditb1a9c9_ShowNormal(this); };
	void tabletEvent(QTabletEvent * event) { callbackPlainTextEditb1a9c9_TabletEvent(this, event); };
	void update() { callbackPlainTextEditb1a9c9_Update(this); };
	void updateMicroFocus() { callbackPlainTextEditb1a9c9_UpdateMicroFocus(this); };
	void Signal_WindowIconChanged(const QIcon & icon) { callbackPlainTextEditb1a9c9_WindowIconChanged(this, const_cast<QIcon*>(&icon)); };
	void Signal_WindowTitleChanged(const QString & title) { QByteArray* t3c6de1 = new QByteArray(title.toUtf8()); Moc_PackedString titlePacked = { const_cast<char*>(t3c6de1->prepend("WHITESPACE").constData()+10), t3c6de1->size()-10, t3c6de1 };callbackPlainTextEditb1a9c9_WindowTitleChanged(this, titlePacked); };
	void childEvent(QChildEvent * event) { callbackPlainTextEditb1a9c9_ChildEvent(this, event); };
	void connectNotify(const QMetaMethod & sign) { callbackPlainTextEditb1a9c9_ConnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	void customEvent(QEvent * event) { callbackPlainTextEditb1a9c9_CustomEvent(this, event); };
	void deleteLater() { callbackPlainTextEditb1a9c9_DeleteLater(this); };
	void Signal_Destroyed(QObject * obj) { callbackPlainTextEditb1a9c9_Destroyed(this, obj); };
	void disconnectNotify(const QMetaMethod & sign) { callbackPlainTextEditb1a9c9_DisconnectNotify(this, const_cast<QMetaMethod*>(&sign)); };
	bool eventFilter(QObject * watched, QEvent * event) { return callbackPlainTextEditb1a9c9_EventFilter(this, watched, event) != 0; };
	void Signal_ObjectNameChanged(const QString & objectName) { QByteArray* taa2c4f = new QByteArray(objectName.toUtf8()); Moc_PackedString objectNamePacked = { const_cast<char*>(taa2c4f->prepend("WHITESPACE").constData()+10), taa2c4f->size()-10, taa2c4f };callbackPlainTextEditb1a9c9_ObjectNameChanged(this, objectNamePacked); };
	void timerEvent(QTimerEvent * event) { callbackPlainTextEditb1a9c9_TimerEvent(this, event); };
signals:
public slots:
	void addLine(QString v0) { QByteArray* tea1dd7 = new QByteArray(v0.toUtf8()); Moc_PackedString v0Packed = { const_cast<char*>(tea1dd7->prepend("WHITESPACE").constData()+10), tea1dd7->size()-10, tea1dd7 };callbackPlainTextEditb1a9c9_AddLine(this, v0Packed); };
private:
};

Q_DECLARE_METATYPE(PlainTextEditb1a9c9*)


void PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaTypes() {
}

void PlainTextEditb1a9c9_AddLine(void* ptr, struct Moc_PackedString v0)
{
	QMetaObject::invokeMethod(static_cast<PlainTextEditb1a9c9*>(ptr), "addLine", Q_ARG(QString, QString::fromUtf8(v0.data, v0.len)));
}

int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType()
{
	return qRegisterMetaType<PlainTextEditb1a9c9*>();
}

int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType2(char* typeName)
{
	return qRegisterMetaType<PlainTextEditb1a9c9*>(const_cast<const char*>(typeName));
}

int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QmlRegisterType()
{
#ifdef QT_QML_LIB
	return qmlRegisterType<PlainTextEditb1a9c9>();
#else
	return 0;
#endif
}

int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName)
{
#ifdef QT_QML_LIB
	return qmlRegisterType<PlainTextEditb1a9c9>(const_cast<const char*>(uri), versionMajor, versionMinor, const_cast<const char*>(qmlName));
#else
	return 0;
#endif
}

void* PlainTextEditb1a9c9___scrollBarWidgets_atList(void* ptr, int i)
{
	return ({QWidget * tmp = static_cast<QList<QWidget *>*>(ptr)->at(i); if (i == static_cast<QList<QWidget *>*>(ptr)->size()-1) { static_cast<QList<QWidget *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___scrollBarWidgets_setList(void* ptr, void* i)
{
	static_cast<QList<QWidget *>*>(ptr)->append(static_cast<QWidget*>(i));
}

void* PlainTextEditb1a9c9___scrollBarWidgets_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QWidget *>();
}

void* PlainTextEditb1a9c9___actions_atList(void* ptr, int i)
{
	return ({QAction * tmp = static_cast<QList<QAction *>*>(ptr)->at(i); if (i == static_cast<QList<QAction *>*>(ptr)->size()-1) { static_cast<QList<QAction *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___actions_setList(void* ptr, void* i)
{
	static_cast<QList<QAction *>*>(ptr)->append(static_cast<QAction*>(i));
}

void* PlainTextEditb1a9c9___actions_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QAction *>();
}

void* PlainTextEditb1a9c9___addActions_actions_atList(void* ptr, int i)
{
	return ({QAction * tmp = static_cast<QList<QAction *>*>(ptr)->at(i); if (i == static_cast<QList<QAction *>*>(ptr)->size()-1) { static_cast<QList<QAction *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___addActions_actions_setList(void* ptr, void* i)
{
	static_cast<QList<QAction *>*>(ptr)->append(static_cast<QAction*>(i));
}

void* PlainTextEditb1a9c9___addActions_actions_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QAction *>();
}

void* PlainTextEditb1a9c9___insertActions_actions_atList(void* ptr, int i)
{
	return ({QAction * tmp = static_cast<QList<QAction *>*>(ptr)->at(i); if (i == static_cast<QList<QAction *>*>(ptr)->size()-1) { static_cast<QList<QAction *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___insertActions_actions_setList(void* ptr, void* i)
{
	static_cast<QList<QAction *>*>(ptr)->append(static_cast<QAction*>(i));
}

void* PlainTextEditb1a9c9___insertActions_actions_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QAction *>();
}

void* PlainTextEditb1a9c9___children_atList(void* ptr, int i)
{
	return ({QObject * tmp = static_cast<QList<QObject *>*>(ptr)->at(i); if (i == static_cast<QList<QObject *>*>(ptr)->size()-1) { static_cast<QList<QObject *>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___children_setList(void* ptr, void* i)
{
	static_cast<QList<QObject *>*>(ptr)->append(static_cast<QObject*>(i));
}

void* PlainTextEditb1a9c9___children_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject *>();
}

void* PlainTextEditb1a9c9___dynamicPropertyNames_atList(void* ptr, int i)
{
	return new QByteArray(({QByteArray tmp = static_cast<QList<QByteArray>*>(ptr)->at(i); if (i == static_cast<QList<QByteArray>*>(ptr)->size()-1) { static_cast<QList<QByteArray>*>(ptr)->~QList(); free(ptr); }; tmp; }));
}

void PlainTextEditb1a9c9___dynamicPropertyNames_setList(void* ptr, void* i)
{
	static_cast<QList<QByteArray>*>(ptr)->append(*static_cast<QByteArray*>(i));
}

void* PlainTextEditb1a9c9___dynamicPropertyNames_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QByteArray>();
}

void* PlainTextEditb1a9c9___findChildren_atList(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___findChildren_setList(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* PlainTextEditb1a9c9___findChildren_newList(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* PlainTextEditb1a9c9___findChildren_atList3(void* ptr, int i)
{
	return ({QObject* tmp = static_cast<QList<QObject*>*>(ptr)->at(i); if (i == static_cast<QList<QObject*>*>(ptr)->size()-1) { static_cast<QList<QObject*>*>(ptr)->~QList(); free(ptr); }; tmp; });
}

void PlainTextEditb1a9c9___findChildren_setList3(void* ptr, void* i)
{
	static_cast<QList<QObject*>*>(ptr)->append(static_cast<QObject*>(i));
}

void* PlainTextEditb1a9c9___findChildren_newList3(void* ptr)
{
	Q_UNUSED(ptr);
	return new QList<QObject*>();
}

void* PlainTextEditb1a9c9_NewPlainTextEdit(void* parent)
{
		return new PlainTextEditb1a9c9(static_cast<QWidget*>(parent));
}

void* PlainTextEditb1a9c9_NewPlainTextEdit2(struct Moc_PackedString text, void* parent)
{
		return new PlainTextEditb1a9c9(QString::fromUtf8(text.data, text.len), static_cast<QWidget*>(parent));
}

void PlainTextEditb1a9c9_DestroyPlainTextEdit(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->~PlainTextEditb1a9c9();
}

void PlainTextEditb1a9c9_DestroyPlainTextEditDefault(void* ptr)
{
	Q_UNUSED(ptr);

}

void PlainTextEditb1a9c9_AppendHtmlDefault(void* ptr, struct Moc_PackedString html)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::appendHtml(QString::fromUtf8(html.data, html.len));
}

void PlainTextEditb1a9c9_AppendPlainTextDefault(void* ptr, struct Moc_PackedString text)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::appendPlainText(QString::fromUtf8(text.data, text.len));
}

char PlainTextEditb1a9c9_CanInsertFromMimeDataDefault(void* ptr, void* source)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::canInsertFromMimeData(static_cast<QMimeData*>(source));
}

void PlainTextEditb1a9c9_CenterCursorDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::centerCursor();
}

void PlainTextEditb1a9c9_ChangeEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::changeEvent(static_cast<QEvent*>(e));
}

void PlainTextEditb1a9c9_ClearDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::clear();
}

void PlainTextEditb1a9c9_ContextMenuEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::contextMenuEvent(static_cast<QContextMenuEvent*>(event));
}

void PlainTextEditb1a9c9_CopyDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::copy();
}

void* PlainTextEditb1a9c9_CreateMimeDataFromSelectionDefault(void* ptr)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::createMimeDataFromSelection();
}

void PlainTextEditb1a9c9_CutDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::cut();
}

void PlainTextEditb1a9c9_DragEnterEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::dragEnterEvent(static_cast<QDragEnterEvent*>(e));
}

void PlainTextEditb1a9c9_DragLeaveEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::dragLeaveEvent(static_cast<QDragLeaveEvent*>(e));
}

void PlainTextEditb1a9c9_DragMoveEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::dragMoveEvent(static_cast<QDragMoveEvent*>(e));
}

void PlainTextEditb1a9c9_DropEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::dropEvent(static_cast<QDropEvent*>(e));
}

void PlainTextEditb1a9c9_FocusInEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::focusInEvent(static_cast<QFocusEvent*>(e));
}

char PlainTextEditb1a9c9_FocusNextPrevChildDefault(void* ptr, char next)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::focusNextPrevChild(next != 0);
}

void PlainTextEditb1a9c9_FocusOutEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::focusOutEvent(static_cast<QFocusEvent*>(e));
}

void PlainTextEditb1a9c9_InputMethodEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::inputMethodEvent(static_cast<QInputMethodEvent*>(e));
}

void* PlainTextEditb1a9c9_InputMethodQueryDefault(void* ptr, long long property)
{
	return new QVariant(static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

void PlainTextEditb1a9c9_InsertFromMimeDataDefault(void* ptr, void* source)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::insertFromMimeData(static_cast<QMimeData*>(source));
}

void PlainTextEditb1a9c9_InsertPlainTextDefault(void* ptr, struct Moc_PackedString text)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::insertPlainText(QString::fromUtf8(text.data, text.len));
}

void PlainTextEditb1a9c9_KeyPressEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::keyPressEvent(static_cast<QKeyEvent*>(e));
}

void PlainTextEditb1a9c9_KeyReleaseEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::keyReleaseEvent(static_cast<QKeyEvent*>(e));
}

void* PlainTextEditb1a9c9_LoadResourceDefault(void* ptr, int ty, void* name)
{
	return new QVariant(static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::loadResource(ty, *static_cast<QUrl*>(name)));
}

void PlainTextEditb1a9c9_MouseDoubleClickEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::mouseDoubleClickEvent(static_cast<QMouseEvent*>(e));
}

void PlainTextEditb1a9c9_MouseMoveEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::mouseMoveEvent(static_cast<QMouseEvent*>(e));
}

void PlainTextEditb1a9c9_MousePressEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::mousePressEvent(static_cast<QMouseEvent*>(e));
}

void PlainTextEditb1a9c9_MouseReleaseEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::mouseReleaseEvent(static_cast<QMouseEvent*>(e));
}

void PlainTextEditb1a9c9_PaintEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::paintEvent(static_cast<QPaintEvent*>(e));
}

void PlainTextEditb1a9c9_PasteDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::paste();
}

void PlainTextEditb1a9c9_RedoDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::redo();
}

void PlainTextEditb1a9c9_ResizeEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::resizeEvent(static_cast<QResizeEvent*>(e));
}

void PlainTextEditb1a9c9_ScrollContentsByDefault(void* ptr, int dx, int dy)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::scrollContentsBy(dx, dy);
}

void PlainTextEditb1a9c9_SelectAllDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::selectAll();
}

void PlainTextEditb1a9c9_SetPlainTextDefault(void* ptr, struct Moc_PackedString text)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setPlainText(QString::fromUtf8(text.data, text.len));
}

void PlainTextEditb1a9c9_ShowEventDefault(void* ptr, void* vqs)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::showEvent(static_cast<QShowEvent*>(vqs));
}

void PlainTextEditb1a9c9_UndoDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::undo();
}

void PlainTextEditb1a9c9_WheelEventDefault(void* ptr, void* e)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::wheelEvent(static_cast<QWheelEvent*>(e));
}

void PlainTextEditb1a9c9_ZoomInDefault(void* ptr, int ran)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::zoomIn(ran);
}

void PlainTextEditb1a9c9_ZoomOutDefault(void* ptr, int ran)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::zoomOut(ran);
}

char PlainTextEditb1a9c9_EventDefault(void* ptr, void* event)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::event(static_cast<QEvent*>(event));
}

void* PlainTextEditb1a9c9_MinimumSizeHintDefault(void* ptr)
{
	return ({ QSize tmpValue = static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::minimumSizeHint(); new QSize(tmpValue.width(), tmpValue.height()); });
}

void PlainTextEditb1a9c9_SetupViewportDefault(void* ptr, void* viewport)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setupViewport(static_cast<QWidget*>(viewport));
}

void* PlainTextEditb1a9c9_SizeHintDefault(void* ptr)
{
	return ({ QSize tmpValue = static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::sizeHint(); new QSize(tmpValue.width(), tmpValue.height()); });
}

char PlainTextEditb1a9c9_ViewportEventDefault(void* ptr, void* event)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::viewportEvent(static_cast<QEvent*>(event));
}

void* PlainTextEditb1a9c9_ViewportSizeHintDefault(void* ptr)
{
	return ({ QSize tmpValue = static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::viewportSizeHint(); new QSize(tmpValue.width(), tmpValue.height()); });
}

void PlainTextEditb1a9c9_ActionEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::actionEvent(static_cast<QActionEvent*>(event));
}

char PlainTextEditb1a9c9_CloseDefault(void* ptr)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::close();
}

void PlainTextEditb1a9c9_CloseEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::closeEvent(static_cast<QCloseEvent*>(event));
}

void PlainTextEditb1a9c9_EnterEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::enterEvent(static_cast<QEvent*>(event));
}

char PlainTextEditb1a9c9_HasHeightForWidthDefault(void* ptr)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::hasHeightForWidth();
}

int PlainTextEditb1a9c9_HeightForWidthDefault(void* ptr, int w)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::heightForWidth(w);
}

void PlainTextEditb1a9c9_HideDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::hide();
}

void PlainTextEditb1a9c9_HideEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::hideEvent(static_cast<QHideEvent*>(event));
}

void PlainTextEditb1a9c9_InitPainterDefault(void* ptr, void* painter)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::initPainter(static_cast<QPainter*>(painter));
}

void PlainTextEditb1a9c9_LeaveEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::leaveEvent(static_cast<QEvent*>(event));
}

void PlainTextEditb1a9c9_LowerDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::lower();
}

int PlainTextEditb1a9c9_MetricDefault(void* ptr, long long m)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(m));
}

void PlainTextEditb1a9c9_MoveEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::moveEvent(static_cast<QMoveEvent*>(event));
}

char PlainTextEditb1a9c9_NativeEventDefault(void* ptr, void* eventType, void* message, long* result)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::nativeEvent(*static_cast<QByteArray*>(eventType), message, result);
}

void* PlainTextEditb1a9c9_PaintEngineDefault(void* ptr)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::paintEngine();
}

void PlainTextEditb1a9c9_RaiseDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::raise();
}

void PlainTextEditb1a9c9_RepaintDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::repaint();
}

void PlainTextEditb1a9c9_SetDisabledDefault(void* ptr, char disable)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setDisabled(disable != 0);
}

void PlainTextEditb1a9c9_SetEnabledDefault(void* ptr, char vbo)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setEnabled(vbo != 0);
}

void PlainTextEditb1a9c9_SetFocus2Default(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setFocus();
}

void PlainTextEditb1a9c9_SetHiddenDefault(void* ptr, char hidden)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setHidden(hidden != 0);
}

void PlainTextEditb1a9c9_SetStyleSheetDefault(void* ptr, struct Moc_PackedString styleSheet)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setStyleSheet(QString::fromUtf8(styleSheet.data, styleSheet.len));
}

void PlainTextEditb1a9c9_SetVisibleDefault(void* ptr, char visible)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setVisible(visible != 0);
}

void PlainTextEditb1a9c9_SetWindowModifiedDefault(void* ptr, char vbo)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setWindowModified(vbo != 0);
}

void PlainTextEditb1a9c9_SetWindowTitleDefault(void* ptr, struct Moc_PackedString vqs)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::setWindowTitle(QString::fromUtf8(vqs.data, vqs.len));
}

void PlainTextEditb1a9c9_ShowDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::show();
}

void PlainTextEditb1a9c9_ShowFullScreenDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::showFullScreen();
}

void PlainTextEditb1a9c9_ShowMaximizedDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::showMaximized();
}

void PlainTextEditb1a9c9_ShowMinimizedDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::showMinimized();
}

void PlainTextEditb1a9c9_ShowNormalDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::showNormal();
}

void PlainTextEditb1a9c9_TabletEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::tabletEvent(static_cast<QTabletEvent*>(event));
}

void PlainTextEditb1a9c9_UpdateDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::update();
}

void PlainTextEditb1a9c9_UpdateMicroFocusDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::updateMicroFocus();
}

void PlainTextEditb1a9c9_ChildEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::childEvent(static_cast<QChildEvent*>(event));
}

void PlainTextEditb1a9c9_ConnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::connectNotify(*static_cast<QMetaMethod*>(sign));
}

void PlainTextEditb1a9c9_CustomEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::customEvent(static_cast<QEvent*>(event));
}

void PlainTextEditb1a9c9_DeleteLaterDefault(void* ptr)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::deleteLater();
}

void PlainTextEditb1a9c9_DisconnectNotifyDefault(void* ptr, void* sign)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::disconnectNotify(*static_cast<QMetaMethod*>(sign));
}

char PlainTextEditb1a9c9_EventFilterDefault(void* ptr, void* watched, void* event)
{
	return static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::eventFilter(static_cast<QObject*>(watched), static_cast<QEvent*>(event));
}



void PlainTextEditb1a9c9_TimerEventDefault(void* ptr, void* event)
{
	static_cast<PlainTextEditb1a9c9*>(ptr)->QPlainTextEdit::timerEvent(static_cast<QTimerEvent*>(event));
}

#include "moc_moc.h"
