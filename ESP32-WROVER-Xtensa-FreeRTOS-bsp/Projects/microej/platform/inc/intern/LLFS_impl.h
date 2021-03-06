/*
 * C
 *
 * Copyright 2016-2017 IS2T. All rights reserved.
 * IS2T PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

/**
 * @file
 * @brief MicroEJ FS low level API
 * @author MicroEJ Developer Team
 * @version 1.0.2
 * @date 1 June 2017
 */

#define LLFS_IMPL_initialize Java_com_is2t_java_io_GenericFileSystem_initializeNative
#define LLFS_IMPL_get_last_modified Java_com_is2t_java_io_GenericFileSystem_lastModifiedNative
#define LLFS_IMPL_set_read_only Java_com_is2t_java_io_GenericFileSystem_setReadOnlyNative
#define LLFS_IMPL_create Java_com_is2t_java_io_GenericFileSystem_createNative
#define LLFS_IMPL_open_directory Java_com_is2t_java_io_GenericFileSystem_opendirNative
#define LLFS_IMPL_read_directory Java_com_is2t_java_io_GenericFileSystem_readdirNative
#define LLFS_IMPL_close_directory Java_com_is2t_java_io_GenericFileSystem_closedirNative
#define LLFS_IMPL_rename_to Java_com_is2t_java_io_GenericFileSystem_renameToNative
#define LLFS_IMPL_get_length Java_com_is2t_java_io_GenericFileSystem_lengthNative
#define LLFS_IMPL_exist Java_com_is2t_java_io_GenericFileSystem_existNative
#define LLFS_IMPL_get_free_space Java_com_is2t_java_io_GenericFileSystem_getFreeSpaceNative
#define LLFS_IMPL_make_directory Java_com_is2t_java_io_GenericFileSystem_mkdirNative
#define LLFS_IMPL_is_hidden Java_com_is2t_java_io_GenericFileSystem_isHiddenNative
#define LLFS_IMPL_is_directory Java_com_is2t_java_io_GenericFileSystem_isDirectoryNative
#define LLFS_IMPL_is_file Java_com_is2t_java_io_GenericFileSystem_isFileNative
#define LLFS_IMPL_get_usable_space Java_com_is2t_java_io_GenericFileSystem_getUsableSpaceNative
#define LLFS_IMPL_get_total_space Java_com_is2t_java_io_GenericFileSystem_getTotalSpaceNative
#define LLFS_IMPL_set_last_modified Java_com_is2t_java_io_GenericFileSystem_setLastModifiedNative
#define LLFS_IMPL_delete Java_com_is2t_java_io_GenericFileSystem_deleteNative
#define LLFS_IMPL_is_accessible Java_com_is2t_java_io_GenericFileSystem_checkAccessNative
#define LLFS_IMPL_set_permission Java_com_is2t_java_io_GenericFileSystem_setPermissionNative
