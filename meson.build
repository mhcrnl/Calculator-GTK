project('calculator_gtk', 'c',        version: '0.1.0',
  meson_version: '>= 0.40.0',
)

i18n = import('i18n')

config_h = configuration_data()
config_h.set_quoted('GETTEXT_PACKAGE', 'calculator_gtk')
config_h.set_quoted('LOCALEDIR', join_paths(get_option('prefix'), get_option('localedir')))
configure_file(
  output: 'calculator_gtk-config.h',
  configuration: config_h,
)
add_project_arguments([
  '-I' + meson.build_root(),
], language: 'c')

subdir('data')
subdir('src')
subdir('po')

meson.add_install_script('build-aux/meson/postinstall.py')