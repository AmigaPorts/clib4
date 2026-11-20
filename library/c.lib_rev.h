#define VERSION			2
#define REVISION		5

#define DATE			"20.10.2026"

/*
 * The SPE build, for the e500v2's floating point (A1222), passes floating
 * point values in different registers, so it is a library of its own that
 * can be installed next to clib4.library.
 */
#ifdef __SPE__
#define CLIB4_LIBRARY_NAME	"clib4spe.library"
#else
#define CLIB4_LIBRARY_NAME	"clib4.library"
#endif

#define VERS			CLIB4_LIBRARY_NAME " 2.5"
#define VSTRING			CLIB4_LIBRARY_NAME " 2.5 (20.10.2026)\r\n"
#define VERSTAG			"\0$VER: " CLIB4_LIBRARY_NAME " 2.5 (20.10.2026)"
