

#pragma once

#ifndef GO_MOC_b1a9c9_H
#define GO_MOC_b1a9c9_H

#include <stdint.h>

#ifdef __cplusplus
class PlainTextEditb1a9c9;
void PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaTypes();
extern "C" {
#endif

struct Moc_PackedString { char* data; long long len; void* ptr; };
struct Moc_PackedList { void* data; long long len; };
void PlainTextEditb1a9c9_AddLine(void* ptr, struct Moc_PackedString v0);
int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType();
int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QRegisterMetaType2(char* typeName);
int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QmlRegisterType();
int PlainTextEditb1a9c9_PlainTextEditb1a9c9_QmlRegisterType2(char* uri, int versionMajor, int versionMinor, char* qmlName);
void* PlainTextEditb1a9c9___scrollBarWidgets_atList(void* ptr, int i);
void PlainTextEditb1a9c9___scrollBarWidgets_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___scrollBarWidgets_newList(void* ptr);
void* PlainTextEditb1a9c9___actions_atList(void* ptr, int i);
void PlainTextEditb1a9c9___actions_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___actions_newList(void* ptr);
void* PlainTextEditb1a9c9___addActions_actions_atList(void* ptr, int i);
void PlainTextEditb1a9c9___addActions_actions_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___addActions_actions_newList(void* ptr);
void* PlainTextEditb1a9c9___insertActions_actions_atList(void* ptr, int i);
void PlainTextEditb1a9c9___insertActions_actions_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___insertActions_actions_newList(void* ptr);
void* PlainTextEditb1a9c9___children_atList(void* ptr, int i);
void PlainTextEditb1a9c9___children_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___children_newList(void* ptr);
void* PlainTextEditb1a9c9___dynamicPropertyNames_atList(void* ptr, int i);
void PlainTextEditb1a9c9___dynamicPropertyNames_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___dynamicPropertyNames_newList(void* ptr);
void* PlainTextEditb1a9c9___findChildren_atList(void* ptr, int i);
void PlainTextEditb1a9c9___findChildren_setList(void* ptr, void* i);
void* PlainTextEditb1a9c9___findChildren_newList(void* ptr);
void* PlainTextEditb1a9c9___findChildren_atList3(void* ptr, int i);
void PlainTextEditb1a9c9___findChildren_setList3(void* ptr, void* i);
void* PlainTextEditb1a9c9___findChildren_newList3(void* ptr);
void* PlainTextEditb1a9c9_NewPlainTextEdit(void* parent);
void* PlainTextEditb1a9c9_NewPlainTextEdit2(struct Moc_PackedString text, void* parent);
void PlainTextEditb1a9c9_DestroyPlainTextEdit(void* ptr);
void PlainTextEditb1a9c9_DestroyPlainTextEditDefault(void* ptr);
void PlainTextEditb1a9c9_AppendHtmlDefault(void* ptr, struct Moc_PackedString html);
void PlainTextEditb1a9c9_AppendPlainTextDefault(void* ptr, struct Moc_PackedString text);
char PlainTextEditb1a9c9_CanInsertFromMimeDataDefault(void* ptr, void* source);
void PlainTextEditb1a9c9_CenterCursorDefault(void* ptr);
void PlainTextEditb1a9c9_ChangeEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_ClearDefault(void* ptr);
void PlainTextEditb1a9c9_ContextMenuEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_CopyDefault(void* ptr);
void* PlainTextEditb1a9c9_CreateMimeDataFromSelectionDefault(void* ptr);
void PlainTextEditb1a9c9_CutDefault(void* ptr);
void PlainTextEditb1a9c9_DragEnterEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_DragLeaveEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_DragMoveEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_DropEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_FocusInEventDefault(void* ptr, void* e);
char PlainTextEditb1a9c9_FocusNextPrevChildDefault(void* ptr, char next);
void PlainTextEditb1a9c9_FocusOutEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_InputMethodEventDefault(void* ptr, void* e);
void* PlainTextEditb1a9c9_InputMethodQueryDefault(void* ptr, long long property);
void PlainTextEditb1a9c9_InsertFromMimeDataDefault(void* ptr, void* source);
void PlainTextEditb1a9c9_InsertPlainTextDefault(void* ptr, struct Moc_PackedString text);
void PlainTextEditb1a9c9_KeyPressEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_KeyReleaseEventDefault(void* ptr, void* e);
void* PlainTextEditb1a9c9_LoadResourceDefault(void* ptr, int ty, void* name);
void PlainTextEditb1a9c9_MouseDoubleClickEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_MouseMoveEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_MousePressEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_MouseReleaseEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_PaintEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_PasteDefault(void* ptr);
void PlainTextEditb1a9c9_RedoDefault(void* ptr);
void PlainTextEditb1a9c9_ResizeEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_ScrollContentsByDefault(void* ptr, int dx, int dy);
void PlainTextEditb1a9c9_SelectAllDefault(void* ptr);
void PlainTextEditb1a9c9_SetPlainTextDefault(void* ptr, struct Moc_PackedString text);
void PlainTextEditb1a9c9_ShowEventDefault(void* ptr, void* vqs);
void PlainTextEditb1a9c9_UndoDefault(void* ptr);
void PlainTextEditb1a9c9_WheelEventDefault(void* ptr, void* e);
void PlainTextEditb1a9c9_ZoomInDefault(void* ptr, int ran);
void PlainTextEditb1a9c9_ZoomOutDefault(void* ptr, int ran);
char PlainTextEditb1a9c9_EventDefault(void* ptr, void* event);
void* PlainTextEditb1a9c9_MinimumSizeHintDefault(void* ptr);
void PlainTextEditb1a9c9_SetupViewportDefault(void* ptr, void* viewport);
void* PlainTextEditb1a9c9_SizeHintDefault(void* ptr);
char PlainTextEditb1a9c9_ViewportEventDefault(void* ptr, void* event);
void* PlainTextEditb1a9c9_ViewportSizeHintDefault(void* ptr);
void PlainTextEditb1a9c9_ActionEventDefault(void* ptr, void* event);
char PlainTextEditb1a9c9_CloseDefault(void* ptr);
void PlainTextEditb1a9c9_CloseEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_EnterEventDefault(void* ptr, void* event);
char PlainTextEditb1a9c9_HasHeightForWidthDefault(void* ptr);
int PlainTextEditb1a9c9_HeightForWidthDefault(void* ptr, int w);
void PlainTextEditb1a9c9_HideDefault(void* ptr);
void PlainTextEditb1a9c9_HideEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_InitPainterDefault(void* ptr, void* painter);
void PlainTextEditb1a9c9_LeaveEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_LowerDefault(void* ptr);
int PlainTextEditb1a9c9_MetricDefault(void* ptr, long long m);
void PlainTextEditb1a9c9_MoveEventDefault(void* ptr, void* event);
char PlainTextEditb1a9c9_NativeEventDefault(void* ptr, void* eventType, void* message, long* result);
void* PlainTextEditb1a9c9_PaintEngineDefault(void* ptr);
void PlainTextEditb1a9c9_RaiseDefault(void* ptr);
void PlainTextEditb1a9c9_RepaintDefault(void* ptr);
void PlainTextEditb1a9c9_SetDisabledDefault(void* ptr, char disable);
void PlainTextEditb1a9c9_SetEnabledDefault(void* ptr, char vbo);
void PlainTextEditb1a9c9_SetFocus2Default(void* ptr);
void PlainTextEditb1a9c9_SetHiddenDefault(void* ptr, char hidden);
void PlainTextEditb1a9c9_SetStyleSheetDefault(void* ptr, struct Moc_PackedString styleSheet);
void PlainTextEditb1a9c9_SetVisibleDefault(void* ptr, char visible);
void PlainTextEditb1a9c9_SetWindowModifiedDefault(void* ptr, char vbo);
void PlainTextEditb1a9c9_SetWindowTitleDefault(void* ptr, struct Moc_PackedString vqs);
void PlainTextEditb1a9c9_ShowDefault(void* ptr);
void PlainTextEditb1a9c9_ShowFullScreenDefault(void* ptr);
void PlainTextEditb1a9c9_ShowMaximizedDefault(void* ptr);
void PlainTextEditb1a9c9_ShowMinimizedDefault(void* ptr);
void PlainTextEditb1a9c9_ShowNormalDefault(void* ptr);
void PlainTextEditb1a9c9_TabletEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_UpdateDefault(void* ptr);
void PlainTextEditb1a9c9_UpdateMicroFocusDefault(void* ptr);
void PlainTextEditb1a9c9_ChildEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_ConnectNotifyDefault(void* ptr, void* sign);
void PlainTextEditb1a9c9_CustomEventDefault(void* ptr, void* event);
void PlainTextEditb1a9c9_DeleteLaterDefault(void* ptr);
void PlainTextEditb1a9c9_DisconnectNotifyDefault(void* ptr, void* sign);
char PlainTextEditb1a9c9_EventFilterDefault(void* ptr, void* watched, void* event);
;
void PlainTextEditb1a9c9_TimerEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif