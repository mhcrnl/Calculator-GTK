calculator_gtk_sources = [
  'main.c',
  'calculator_gtk-window.c',
]

calculator_gtk_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

calculator_gtk_sources += gnome.compile_resources('calculator_gtk-resources',
  'calculator_gtk.gresource.xml',
  c_name: 'calculator_gtk'
)

executable('calculator_gtk', calculator_gtk_sources,
  dependencies: calculator_gtk_deps,
  install: true,
)
