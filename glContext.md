# Overview #

**glContext** or how to add OpenGL capabilities to any user interface toolkits.

# Details #

The goal of the glContext library is to build a simple API which provides the OpenGL capabilities to any widget of any user interface toolkit.
It should be available on any operating system.

glContext API, inspired by [cairo](http://www.cairographics.org), are available throw several C libraries.
The main library, called **glc**, contains the API to manage OpenGL context. The secondary library contains the bridge between a user interface toolkit and **glc**.
Available bridges :
  * **glc\_gtk** for gtk
  * **glc\_gtkmm** for gtkmm
  * wxWidgets (todo)
  * QT (todo)

**glContext** could be used on MS/Windows (X11 on GNU/Linux to come).

# License #
The software is released under the [GNU Lesser General Public License (LGPL)](http://www.gnu.org/licenses/lgpl.html) open source licence.


---

Links to other libraries :
  * [GtkGLExt](http://projects.gnome.org/gtkglext/)
  * [GtkGLArea](http://www.student.oulu.fi/~jlof/gtkglarea/)
  * wxGLCanvas in wxWidgets
  * QtOpenGL for Qt