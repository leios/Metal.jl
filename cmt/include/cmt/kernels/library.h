/*
 * Copyright (c), Recep Aslantas.
 * MIT License (MIT), http://opensource.org/licenses/MIT
 */

#ifndef cmt_library_h
#define cmt_library_h
#ifdef __cplusplus
extern "C" {
#endif

#include "cmt/common.h"
#include "cmt/types.h"
#include "cmt/enums.h"
#include "cmt/error.h"

MT_EXPORT
MtLibrary*
mtNewDefaultLibrary(MtDevice *device);

MT_EXPORT
MtLibrary*
mtNewLibraryWithFile(MtDevice *device, char *filepath, NsError **error);

MT_EXPORT
MtLibrary*
mtNewLibraryWithSource(MtDevice *device, char *source, MtCompileOptions *Opts, NsError **error);

MT_EXPORT
MtLibrary*
mtNewLibraryWithData(MtDevice *device, void* buffer, size_t size, NsError **error);

MT_EXPORT
void
mtLibraryRelease(MtLibrary *lib);

MT_EXPORT
MtDevice*
mtLibraryDevice(MtLibrary *lib);

MT_EXPORT
const char*
mtLibraryLabel(MtLibrary *lib);

MT_EXPORT
void
mtLibraryFunctionNames(MtLibrary *lib, size_t* count, const char **names);


#ifdef __cplusplus
}
#endif
#endif /* cmt_library_h */
