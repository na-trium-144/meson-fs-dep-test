project('meson-fs-dep-test', 'cpp', default_options: ['cpp_std=c++17,c++11'])

filesystem_dep = dependency('cpp-filesystem', 'cpp-experimental-filesystem')
filesystem_is_experimental = filesystem_dep.name() == 'cpp-experimental-filesystem'

executable('main', 'main.cc',
  dependencies: [filesystem_dep],
  cpp_args: filesystem_is_experimental ? ['-DEXPERIMENTAL_FS'] : []
)
