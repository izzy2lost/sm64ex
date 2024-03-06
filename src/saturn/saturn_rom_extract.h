#ifndef SaturnRomExtract
#define SaturnRomExtract

#define EXTRACT_TYPE_SOUND      (1 << 0)
#define EXTRACT_TYPE_SATURN     (1 << 1)
#define EXTRACT_TYPE_TEXTURES   (1 << 2)
#define EXTRACT_TYPE_FONT       (1 << 3)
#define EXTRACT_TYPE_TRANSITION (1 << 4)
#define EXTRACT_TYPE_ALL      0xFFFFFFFF

#ifdef __cplusplus

#include <string>

extern std::string currently_extracting;

extern "C" {
#endif
    int copy_custom_assets(void);
    int saturn_extract_rom(int type);
#ifdef __cplusplus
}

/* Test for GCC > 8.3.0 */
#if __GNUC__ > 8 && __GNUC_MINOR__ > 3 && __GNUC_PATCHLEVEL__ > 0
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif
#endif

#endif