project(
    'NodeInfo',
    'cpp',
    meson_version: '>=0.54.3',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++17',
    ],
    license: 'Apache-2.0',
)

configure_file(
    input: 'xyz.openbmc_project.NodeInfo.service.in',
    output: 'xyz.openbmc_project.NodeInfo.service',
    configuration: {
        'bindir': get_option('prefix') / get_option('bindir'),
    },
    install: true,
    install_dir: systemd.get_pkgconfig_variable('systemdsystemunitdir'),
)