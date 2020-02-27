package main

/*
#cgo CFLAGS: -fno-keep-inline-dllexport -O2 -Wall -W -Wextra -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NEEDS_QMAIN -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
#cgo CXXFLAGS: -fno-keep-inline-dllexport -O2 -Wall -W -Wextra -fexceptions -mthreads -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NEEDS_QMAIN -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
#cgo CXXFLAGS: -I../../Projects -I. -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtWidgets -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtGui -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtANGLE -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtQml -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtNetwork -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/include/QtCore -Irelease -I/include -I../../../../Qt/Qt5.13.0/5.13.0/mingw73_64/mkspecs/win32-g++
#cgo LDFLAGS:        -Wl,-subsystem,windows -mthreads -L C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib
#cgo LDFLAGS:        C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libQt5Widgets.a C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libQt5Gui.a C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libQt5Qml.a C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libQt5Network.a C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libQt5Core.a  -lmingw32 C:/Qt/Qt5.13.0/5.13.0/mingw73_64/lib/libqtmain.a -LC:/openssl/lib -LC:/Utils/postgresql/pgsql/lib -lshell32
#cgo LDFLAGS: -Wl,--allow-multiple-definition
#cgo CFLAGS: -Wno-unused-parameter -Wno-unused-variable -Wno-return-type
#cgo CXXFLAGS: -Wno-unused-parameter -Wno-unused-variable -Wno-return-type
*/
import "C"
