#include <debian/libdeb/archformat.h>

const char * deb_archformat_get_name(DEB_ARCHFORMAT format)
{
    switch(format) {
    case DEB_ARCHFORMAT_BASE_MASK:
        return "base-mask";
    case DEB_ARCHFORMAT_CPIO:
        return "cpio";
    case DEB_ARCHFORMAT_CPIO_POSIX:
        return "cpio-posix";
    case DEB_ARCHFORMAT_CPIO_BIN_LE:
        return "cpio-bin-le";
    case DEB_ARCHFORMAT_CPIO_BIN_BE:
        return "cpio-bin-be";
    case DEB_ARCHFORMAT_CPIO_SVR4_NOCRC:
        return "cpio-svr4-nocrc";
    case DEB_ARCHFORMAT_CPIO_SVR4_CRC:
        return "cpio-svr4-crc";
    case DEB_ARCHFORMAT_CPIO_AFIO_LARGE:
        return "cpio-afio-large";
    case DEB_ARCHFORMAT_SHAR:
        return "shar";
    case DEB_ARCHFORMAT_SHAR_BASE:
        return "shar-base";
    case DEB_ARCHFORMAT_SHAR_DUMP:
        return "shar-dump";
    case DEB_ARCHFORMAT_TAR:
        return "tar";
    case DEB_ARCHFORMAT_TAR_USTAR:
        return "tar-ustar";
    case DEB_ARCHFORMAT_TAR_PAX_INTERCHANGE:
        return "tar-pax-interchange";
    case DEB_ARCHFORMAT_TAR_PAX_RESTRICTED:
        return "tar-pax-restricted";
    case DEB_ARCHFORMAT_TAR_GNUTAR:
        return "gnu-tar";
    case DEB_ARCHFORMAT_ISO9660:
        return "iso9660";
    case DEB_ARCHFORMAT_ISO9660_ROCKRIDGE:
        return "iso9660-rockridge";
    case DEB_ARCHFORMAT_ZIP:
        return "zip";
    case DEB_ARCHFORMAT_EMPTY:
        return "empty";
    case DEB_ARCHFORMAT_AR:
        return "ar";
    case DEB_ARCHFORMAT_AR_GNU:
        return "ar-gnu";
    case DEB_ARCHFORMAT_AR_BSD:
        return "ar-bsd";
    case DEB_ARCHFORMAT_MTREE:
        return "mtree";
    case DEB_ARCHFORMAT_RAW:
        return "raw";
    case DEB_ARCHFORMAT_XAR:
        return "xar";
    case DEB_ARCHFORMAT_LHA:
        return "lha";
    case DEB_ARCHFORMAT_CAB:
        return "cab";
    case DEB_ARCHFORMAT_RAR:
        return "rar";
    case DEB_ARCHFORMAT_7ZIP:
        return "7zip";
    case DEB_ARCHFORMAT_WARC:
        return "warc";
    default:
        return "unknown";
    }
}