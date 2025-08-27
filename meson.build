project('meson-fs-dep-test', 'cpp', default_options: ['cpp_std=c++17,c++11'])

filesystem_dep = dependency('cpp-filesystem', 'cpp-experimental-filesystem')
executable('main', 'main.cc', dependencies: [filesystem_dep])
