/* calculator_gtk-window.c
 *
 * Copyright 2018 RicardoEPRodrigues
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "calculator_gtk-config.h"
#include "calculator_gtk-window.h"

struct _Calculator_gtkWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkLabel            *label;
  GtkButton           *button;
};

G_DEFINE_TYPE (Calculator_gtkWindow, calculator_gtk_window, GTK_TYPE_APPLICATION_WINDOW)

static void
calculator_gtk_window_class_init (Calculator_gtkWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/org/gnome/Calculator_Gtk/calculator_gtk-window.ui");
  gtk_widget_class_bind_template_child (widget_class, Calculator_gtkWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, Calculator_gtkWindow, label);
  gtk_widget_class_bind_template_child (widget_class, Calculator_gtkWindow, button);
}

static void
calculator_gtk_window_init (Calculator_gtkWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
