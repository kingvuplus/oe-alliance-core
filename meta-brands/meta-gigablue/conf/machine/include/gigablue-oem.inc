# We know about rtc
include conf/machine/include/build-extras.inc

BRAND_OEM = "gigablue"

MACHINE_NAME = "\
${@base_contains('MACHINEBUILD', 'gb800se', '800 SE' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', '800 SE Plus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', '800 Solo' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', '800 UE' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', '800 UE Plus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'IPBox' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'Quad' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'Quad Plus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'Ultra SE' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'Ultra UE' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'X1' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'X3' , '', d)}\
"

MACHINE_BRAND = "\
${@base_contains('MACHINEBUILD', 'gb800se', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'GigaBlue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'GigaBlue' , '', d)}\
"

IMAGEDIR ?= "\
${@base_contains('MACHINEBUILD', 'gb800se', 'gigablue/se' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', 'gigablue/seplus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', 'gigablue/solo' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', 'gigablue/ue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', 'gigablue/ueplus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'gigablue/ipbox' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'gigablue/quad' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'gigablue/quadplus' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'gigablue/ultrase' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'gigablue/ultraue' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'gigablue/x1' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'gigablue/x3' , '', d)}\
"

MTD_KERNEL = "\
${@base_contains('MACHINEBUILD', 'gb800se', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'mtd2' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'mtd2' , '', d)}\
"

MTD_ROOTFS = "\
${@base_contains('MACHINEBUILD', 'gb800se', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'mtd0' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'mtd0' , '', d)}\
"

MACHINE_DRIVER = "\
${@base_contains('MACHINEBUILD', 'gb800se', 'gb7325' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800seplus', 'gb7358' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800solo', 'gb7325' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ue', 'gb7325' , '', d)}\
${@base_contains('MACHINEBUILD', 'gb800ueplus', 'gb7358' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbipbox', 'gb7358' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquad', 'gb7356' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbquadplus', 'gb7356' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultrase', 'gb7362' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbultraue', 'gb7362' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx1', 'gb7362' , '', d)}\
${@base_contains('MACHINEBUILD', 'gbx3', 'gb7362' , '', d)}\
"

KERNEL_FILE = "kernel.bin"
ROOTFS_FILE = "rootfs.bin"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS = " \
    gigablue-dvb-modules-${MACHINE_DRIVER} \
    gigablue-ddbootup \
    "

DVBPROVIDER = "kernel"

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS = " \
    kernel-module-cdfs \
    kernel-module-zram \
    kernel-module-ext2 \
    kernel-module-ext3 \
    kernel-module-ext4 \
    kernel-module-cifs \
    kernel-module-autofs4 \
    ${@base_contains('MACHINEBUILD', 'gbquad', 'kernel-module-smsc75xx' , '', d)} \
    "

MACHINE_EXTRA_RRECOMMENDS = " \
    gstreamer1.0-plugin-dvbmediasink \
    gigablue-cfe \
    ${@base_contains('DISTRO_FEATURES', 'audioeffect', 'enigma2-plugin-systemplugins-audioeffect' , '', d)} \
    "

EXTRA_IMAGEDEPENDS += "\
    enigma2-plugin-systemplugins-vfdcontrol \
    "

MACHINE_EXTRA_RDEPENDS = "\
    enigma2-plugin-systemplugins-vfdcontrol \
    ${@base_contains('MACHINEBUILD', 'gb800solo', 'mtd-utils-jffs2' , '', d)} \
    ${@base_contains('MACHINEBUILD', 'gbipbox', 'enigma2-plugin-extensions-gbipboxclient' , '', d)} \
"


include conf/machine/include/autoload-filesystems.inc

PREFERRED_PROVIDER_virtual/blindscan-dvbc = "gigablue-blindscan-utils"
PREFERRED_PROVIDER_virtual/blindscan-dvbs = "gigablue-blindscan-utils"
PREFERRED_PROVIDER_virtual/transtreamproxy = "gb-transtreamproxy"

DVBMEDIASINK_CONFIG = "--with-wmv"

TARGET_ARCH = "mipsel"
DEFAULTTUNE = "mips32el"

GLIBC_EXTRA_OECONF = "--with-tls"

PREFERRED_PROVIDER_virtual/kernel = "linux-gigablue"

KERNEL_IMAGETYPE = "vmlinux"
KERNEL_OUTPUT = "${KERNEL_IMAGETYPE}"
KERNEL_CONSOLE = "ttyS0,115200n8"


MACHINE_FEATURES += "3dtv alsa hdmicec switchoff bootsplash boxmodel omb skins1080"

BOOTLOGO_FILENAME = "splash.bin"

require conf/machine/include/tune-mips32.inc

IMAGE_CMD_ubi_prepend = " \
    rm -rf ${IMAGE_ROOTFS}/boot/*; \
    rm -rf ${IMAGE_ROOTFS}/tmp/*; \
    "

IMAGE_CMD_ubi_append = "; \
    mkdir -p ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}; \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd220", "cp ${DEPLOY_DIR_IMAGE}/lcdsplash220.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdsplash.bin;" , "", d)} \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd220", "cp ${DEPLOY_DIR_IMAGE}/lcdwarning220.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdwarning.bin;" , "", d)} \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd220", "cp ${DEPLOY_DIR_IMAGE}/lcdwaitkey220.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdwaitkey.bin;" , "", d)} \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd400", "cp ${DEPLOY_DIR_IMAGE}/lcdsplash400.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdsplash.bin;" , "", d)} \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd400", "cp ${DEPLOY_DIR_IMAGE}/lcdwarning400.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdwarning.bin;" , "", d)} \
    ${@base_contains("MACHINE_FEATURES", "gigabluelcd400", "cp ${DEPLOY_DIR_IMAGE}/lcdwaitkey400.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/lcdwaitkey.bin;" , "", d)} \
    cp ${DEPLOY_DIR_IMAGE}/splash.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/splash.bin; \
    cp ${DEPLOY_DIR_IMAGE}/warning.bin ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/warning.bin; \
    mv ${DEPLOY_DIR_IMAGE}/${IMAGE_NAME}_rootfs.rootfs.ubi ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/${ROOTFS_FILE}; \
    gzip -f -c ${DEPLOY_DIR_IMAGE}/vmlinux-${MACHINE}.bin > ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/${KERNEL_FILE}; \
    echo ${IMAGE_VER_STRING} > ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/imageversion; \
    echo "rename this file to 'force' to force an update without confirmation" > ${DEPLOY_DIR_IMAGE}/${IMAGEDIR}/noforce; \
    cd ${DEPLOY_DIR_IMAGE}; \
    zip -r ${IMAGE_NAME}_usb.zip gigablue/*; \
    rm -f ${DEPLOY_DIR_IMAGE}/*.ubi; \
    rm -f ${DEPLOY_DIR_IMAGE}/*.ubifs; \
    rm -f ${DEPLOY_DIR_IMAGE}/*.manifest; \
    rm -f ${DEPLOY_DIR_IMAGE}/.ubifs; \
    rm -f ${DEPLOY_DIR_IMAGE}/.manifest; \
    rm -rf ${DEPLOY_DIR_IMAGE}/gigablue; \
    "
