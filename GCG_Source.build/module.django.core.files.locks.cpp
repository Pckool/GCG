/* Generated code for Python source for module 'django.core.files.locks'
 * created by Nuitka version 0.5.28.2
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_django$core$files$locks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$files$locks;
PyDictObject *moduledict_django$core$files$locks;

/* The module constants used, if any. */
static PyObject *const_str_digest_b1551aa05699916963fba60cd0b6ab24;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_f_str_plain_ret_tuple;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
extern PyObject *const_str_plain_fileno;
static PyObject *const_str_plain_LockFileEx;
static PyObject *const_str_plain_LOCK_UN;
static PyObject *const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple;
static PyObject *const_str_plain_Pointer;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_windll;
static PyObject *const_str_plain__offset_union;
static PyObject *const_str_plain_c_void_p;
static PyObject *const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_42df17691a5bdc07c8cd155c12459e20;
static PyObject *const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple;
static PyObject *const_str_plain__fd;
extern PyObject *const_str_plain_Structure;
static PyObject *const_str_digest_a626a13b3058349d2afa437ad8ee7321;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_ULONG_PTR;
static PyObject *const_str_plain_UnlockFileEx;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_8071bbe53f51957943f3658864586204_tuple;
static PyObject *const_str_plain__OFFSET;
extern PyObject *const_str_plain_HANDLE;
extern PyObject *const_str_plain_sizeof;
static PyObject *const_str_plain_c_ulong;
extern PyObject *const_str_plain_unlock;
static PyObject *const_str_plain_Internal;
static PyObject *const_str_plain_byref;
static PyObject *const_str_digest_99914ea3406ca8c61c220e86b8483279;
extern PyObject *const_str_plain_argtypes;
extern PyObject *const_str_plain_fcntl;
static PyObject *const_str_plain_PVOID;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_restype;
extern PyObject *const_int_pos_4294901760;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_kernel32;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain__OFFSET_UNION;
static PyObject *const_str_plain_get_osfhandle;
extern PyObject *const_str_plain_ctypes;
static PyObject *const_str_plain_hfile;
extern PyObject *const_int_0;
static PyObject *const_str_plain_OVERLAPPED;
static PyObject *const_str_plain_msvcrt;
static PyObject *const_list_str_plain__offset_list;
static PyObject *const_str_digest_591e5f6601e322ee4cac3e010b63a9d9;
extern PyObject *const_str_plain__offset;
extern PyObject *const_str_plain_LOCK_EX;
extern PyObject *const_str_plain_lock;
static PyObject *const_str_plain_flock;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_list_str_plain__offset_union_list;
static PyObject *const_str_plain_Union;
static PyObject *const_tuple_str_plain_f_str_plain_flags_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_hEvent;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_overlapped;
extern PyObject *const_str_plain_c_int64;
static PyObject *const_str_plain__anonymous_;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_LPOVERLAPPED;
static PyObject *const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple;
static PyObject *const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple;
static PyObject *const_str_plain_LOCK_NB;
extern PyObject *const_tuple_str_plain_f_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_Offset;
extern PyObject *const_str_digest_09be10fde7aee5d022fb2ff0b2af134a;
static PyObject *const_str_plain_OffsetHigh;
extern PyObject *const_str_plain_LOCK_SH;
static PyObject *const_str_plain_InternalHigh;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b1551aa05699916963fba60cd0b6ab24 = UNSTREAM_STRING( &constant_bin[ 776605 ], 32, 0 );
    const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    const_str_plain__anonymous_ = UNSTREAM_STRING( &constant_bin[ 776637 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 3, const_str_plain__anonymous_ ); Py_INCREF( const_str_plain__anonymous_ );
    PyTuple_SET_ITEM( const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 4, const_str_plain__fields_ ); Py_INCREF( const_str_plain__fields_ );
    const_tuple_str_plain_f_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_ret_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_LockFileEx = UNSTREAM_STRING( &constant_bin[ 776648 ], 10, 1 );
    const_str_plain_LOCK_UN = UNSTREAM_STRING( &constant_bin[ 776658 ], 7, 1 );
    const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain_hfile = UNSTREAM_STRING( &constant_bin[ 776665 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple, 1, const_str_plain_hfile ); Py_INCREF( const_str_plain_hfile );
    const_str_plain_overlapped = UNSTREAM_STRING( &constant_bin[ 776670 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple, 2, const_str_plain_overlapped ); Py_INCREF( const_str_plain_overlapped );
    PyTuple_SET_ITEM( const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple, 3, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_Pointer = UNSTREAM_STRING( &constant_bin[ 124877 ], 7, 1 );
    const_str_plain__offset_union = UNSTREAM_STRING( &constant_bin[ 776680 ], 13, 1 );
    const_str_plain_c_void_p = UNSTREAM_STRING( &constant_bin[ 776693 ], 8, 1 );
    const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple, 0, const_str_plain_BOOL ); Py_INCREF( const_str_plain_BOOL );
    PyTuple_SET_ITEM( const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple, 1, const_str_plain_DWORD ); Py_INCREF( const_str_plain_DWORD );
    PyTuple_SET_ITEM( const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple, 2, const_str_plain_HANDLE ); Py_INCREF( const_str_plain_HANDLE );
    const_str_digest_42df17691a5bdc07c8cd155c12459e20 = UNSTREAM_STRING( &constant_bin[ 776701 ], 67, 0 );
    const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple, 0, const_str_plain_LOCK_EX ); Py_INCREF( const_str_plain_LOCK_EX );
    PyTuple_SET_ITEM( const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple, 1, const_str_plain_LOCK_SH ); Py_INCREF( const_str_plain_LOCK_SH );
    const_str_plain_LOCK_NB = UNSTREAM_STRING( &constant_bin[ 776768 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple, 2, const_str_plain_LOCK_NB ); Py_INCREF( const_str_plain_LOCK_NB );
    PyTuple_SET_ITEM( const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple, 3, const_str_plain_lock ); Py_INCREF( const_str_plain_lock );
    PyTuple_SET_ITEM( const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple, 4, const_str_plain_unlock ); Py_INCREF( const_str_plain_unlock );
    const_str_plain__fd = UNSTREAM_STRING( &constant_bin[ 57436 ], 3, 1 );
    const_str_digest_a626a13b3058349d2afa437ad8ee7321 = UNSTREAM_STRING( &constant_bin[ 776613 ], 23, 0 );
    const_str_plain_ULONG_PTR = UNSTREAM_STRING( &constant_bin[ 776775 ], 9, 1 );
    const_str_plain_UnlockFileEx = UNSTREAM_STRING( &constant_bin[ 776784 ], 12, 1 );
    const_tuple_8071bbe53f51957943f3658864586204_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8071bbe53f51957943f3658864586204_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_8071bbe53f51957943f3658864586204_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_8071bbe53f51957943f3658864586204_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_8071bbe53f51957943f3658864586204_tuple, 3, const_str_plain__fields_ ); Py_INCREF( const_str_plain__fields_ );
    const_str_plain__OFFSET = UNSTREAM_STRING( &constant_bin[ 776796 ], 7, 1 );
    const_str_plain_c_ulong = UNSTREAM_STRING( &constant_bin[ 776803 ], 7, 1 );
    const_str_plain_Internal = UNSTREAM_STRING( &constant_bin[ 69373 ], 8, 1 );
    const_str_plain_byref = UNSTREAM_STRING( &constant_bin[ 776810 ], 5, 1 );
    const_str_digest_99914ea3406ca8c61c220e86b8483279 = UNSTREAM_STRING( &constant_bin[ 776815 ], 629, 0 );
    const_str_plain_PVOID = UNSTREAM_STRING( &constant_bin[ 777444 ], 5, 1 );
    const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple, 2, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain__OFFSET_UNION = UNSTREAM_STRING( &constant_bin[ 777449 ], 13, 1 );
    const_str_plain_get_osfhandle = UNSTREAM_STRING( &constant_bin[ 777462 ], 13, 1 );
    const_str_plain_OVERLAPPED = UNSTREAM_STRING( &constant_bin[ 777475 ], 10, 1 );
    const_str_plain_msvcrt = UNSTREAM_STRING( &constant_bin[ 777485 ], 6, 1 );
    const_list_str_plain__offset_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain__offset_list, 0, const_str_plain__offset ); Py_INCREF( const_str_plain__offset );
    const_str_digest_591e5f6601e322ee4cac3e010b63a9d9 = UNSTREAM_STRING( &constant_bin[ 777491 ], 26, 0 );
    const_str_plain_flock = UNSTREAM_STRING( &constant_bin[ 777517 ], 5, 1 );
    const_list_str_plain__offset_union_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain__offset_union_list, 0, const_str_plain__offset_union ); Py_INCREF( const_str_plain__offset_union );
    const_str_plain_Union = UNSTREAM_STRING( &constant_bin[ 777522 ], 5, 1 );
    const_tuple_str_plain_f_str_plain_flags_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_flags_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_flags_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    const_str_plain_hEvent = UNSTREAM_STRING( &constant_bin[ 777527 ], 6, 1 );
    const_str_plain_LPOVERLAPPED = UNSTREAM_STRING( &constant_bin[ 777533 ], 12, 1 );
    const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 2, const_str_plain_hfile ); Py_INCREF( const_str_plain_hfile );
    PyTuple_SET_ITEM( const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 3, const_str_plain_overlapped ); Py_INCREF( const_str_plain_overlapped );
    PyTuple_SET_ITEM( const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 4, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 0, const_str_plain_sizeof ); Py_INCREF( const_str_plain_sizeof );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 1, const_str_plain_c_ulong ); Py_INCREF( const_str_plain_c_ulong );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 2, const_str_plain_c_void_p ); Py_INCREF( const_str_plain_c_void_p );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 3, const_str_plain_c_int64 ); Py_INCREF( const_str_plain_c_int64 );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 4, const_str_plain_Structure ); Py_INCREF( const_str_plain_Structure );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 5, const_str_plain_Union ); Py_INCREF( const_str_plain_Union );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 6, const_str_plain_POINTER ); Py_INCREF( const_str_plain_POINTER );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 7, const_str_plain_windll ); Py_INCREF( const_str_plain_windll );
    PyTuple_SET_ITEM( const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple, 8, const_str_plain_byref ); Py_INCREF( const_str_plain_byref );
    const_str_plain_Offset = UNSTREAM_STRING( &constant_bin[ 64596 ], 6, 1 );
    const_str_plain_OffsetHigh = UNSTREAM_STRING( &constant_bin[ 777545 ], 10, 1 );
    const_str_plain_InternalHigh = UNSTREAM_STRING( &constant_bin[ 777555 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$files$locks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fd974b0a1fabefe5f5cf60490c008aa4;
static PyCodeObject *codeobj_947af7aea6e96dca2c1de6a2b46258ce;
static PyCodeObject *codeobj_40341d5e5e2984a18e19b66db6a0e884;
static PyCodeObject *codeobj_7b4509389074ffb30c3584e7115760c7;
static PyCodeObject *codeobj_e3938a5a0188e9b7b8f965c13a42da02;
static PyCodeObject *codeobj_c3c1063fe187dbd2403898bb2e8055d0;
static PyCodeObject *codeobj_7fcdb4b7c4c569c475fc0676188858b0;
static PyCodeObject *codeobj_61ca6b2c9b5bb9ff5da55aeecae2510a;
static PyCodeObject *codeobj_75f5160acff707c5be496a14d2721aea;
static PyCodeObject *codeobj_4e4c4695a57a2669ee0ea1b7c37b83dd;
static PyCodeObject *codeobj_754dda2fde10ea6e8429d1363b906556;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_591e5f6601e322ee4cac3e010b63a9d9 );
    codeobj_fd974b0a1fabefe5f5cf60490c008aa4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b1551aa05699916963fba60cd0b6ab24, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_947af7aea6e96dca2c1de6a2b46258ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OVERLAPPED, 59, const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 0, 0, CO_NOFREE );
    codeobj_40341d5e5e2984a18e19b66db6a0e884 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__OFFSET, 48, const_tuple_8071bbe53f51957943f3658864586204_tuple, 0, 0, CO_NOFREE );
    codeobj_7b4509389074ffb30c3584e7115760c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__OFFSET_UNION, 53, const_tuple_b15de337f00bbb6eddbdd281030b2071_tuple, 0, 0, CO_NOFREE );
    codeobj_e3938a5a0188e9b7b8f965c13a42da02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fd, 24, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3c1063fe187dbd2403898bb2e8055d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lock, 77, const_tuple_d5778e8f97d3969107bf5d7a8f4b0957_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7fcdb4b7c4c569c475fc0676188858b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lock, 99, const_tuple_str_plain_f_str_plain_flags_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61ca6b2c9b5bb9ff5da55aeecae2510a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lock, 107, const_tuple_str_plain_f_str_plain_flags_str_plain_ret_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_75f5160acff707c5be496a14d2721aea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unlock, 83, const_tuple_7cc9f4649cde82506db22d172d4f2835_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4e4c4695a57a2669ee0ea1b7c37b83dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unlock, 103, const_tuple_str_plain_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_754dda2fde10ea6e8429d1363b906556 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unlock, 111, const_tuple_str_plain_f_str_plain_ret_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_1__fd(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_2_lock(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_3_unlock(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_4_lock(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_5_unlock(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_6_lock(  );


static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_7_unlock(  );


// The module function definitions.
static PyObject *impl_django$core$files$locks$$$function_1__fd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e3938a5a0188e9b7b8f965c13a42da02 = NULL;

    struct Nuitka_FrameObject *frame_e3938a5a0188e9b7b8f965c13a42da02;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3938a5a0188e9b7b8f965c13a42da02, codeobj_e3938a5a0188e9b7b8f965c13a42da02, module_django$core$files$locks, sizeof(void *) );
    frame_e3938a5a0188e9b7b8f965c13a42da02 = cache_frame_e3938a5a0188e9b7b8f965c13a42da02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3938a5a0188e9b7b8f965c13a42da02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3938a5a0188e9b7b8f965c13a42da02 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_source_1 = par_f;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_fileno;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_instance_1 = par_f;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e3938a5a0188e9b7b8f965c13a42da02->m_frame.f_lineno = 26;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = par_f;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3938a5a0188e9b7b8f965c13a42da02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3938a5a0188e9b7b8f965c13a42da02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3938a5a0188e9b7b8f965c13a42da02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3938a5a0188e9b7b8f965c13a42da02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3938a5a0188e9b7b8f965c13a42da02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3938a5a0188e9b7b8f965c13a42da02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3938a5a0188e9b7b8f965c13a42da02,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_e3938a5a0188e9b7b8f965c13a42da02 == cache_frame_e3938a5a0188e9b7b8f965c13a42da02 )
    {
        Py_DECREF( frame_e3938a5a0188e9b7b8f965c13a42da02 );
    }
    cache_frame_e3938a5a0188e9b7b8f965c13a42da02 = NULL;

    assertFrameObject( frame_e3938a5a0188e9b7b8f965c13a42da02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_1__fd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_1__fd );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_2_lock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_flags = python_pars[ 1 ];
    PyObject *var_hfile = NULL;
    PyObject *var_overlapped = NULL;
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c3c1063fe187dbd2403898bb2e8055d0 = NULL;

    struct Nuitka_FrameObject *frame_c3c1063fe187dbd2403898bb2e8055d0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c3c1063fe187dbd2403898bb2e8055d0, codeobj_c3c1063fe187dbd2403898bb2e8055d0, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c3c1063fe187dbd2403898bb2e8055d0 = cache_frame_c3c1063fe187dbd2403898bb2e8055d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c3c1063fe187dbd2403898bb2e8055d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c3c1063fe187dbd2403898bb2e8055d0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_msvcrt );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvcrt );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "msvcrt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_osfhandle );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__fd );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fd );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_f;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hfile == NULL );
    var_hfile = tmp_assign_source_1;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame.f_lineno = 79;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_overlapped == NULL );
    var_overlapped = tmp_assign_source_2;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LockFileEx );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LockFileEx );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_hfile;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hfile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_flags;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_int_0;
    tmp_args_element_name_6 = const_int_0;
    tmp_args_element_name_7 = const_int_pos_4294901760;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_byref );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byref );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_overlapped;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_3;

    tmp_bool_arg_1 = var_ret;

    CHECK_OBJECT( tmp_bool_arg_1 );
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3c1063fe187dbd2403898bb2e8055d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3c1063fe187dbd2403898bb2e8055d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c3c1063fe187dbd2403898bb2e8055d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c3c1063fe187dbd2403898bb2e8055d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c3c1063fe187dbd2403898bb2e8055d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c3c1063fe187dbd2403898bb2e8055d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c3c1063fe187dbd2403898bb2e8055d0,
        type_description_1,
        par_f,
        par_flags,
        var_hfile,
        var_overlapped,
        var_ret
    );


    // Release cached frame.
    if ( frame_c3c1063fe187dbd2403898bb2e8055d0 == cache_frame_c3c1063fe187dbd2403898bb2e8055d0 )
    {
        Py_DECREF( frame_c3c1063fe187dbd2403898bb2e8055d0 );
    }
    cache_frame_c3c1063fe187dbd2403898bb2e8055d0 = NULL;

    assertFrameObject( frame_c3c1063fe187dbd2403898bb2e8055d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_2_lock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_hfile );
    var_hfile = NULL;

    Py_XDECREF( var_overlapped );
    var_overlapped = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_hfile );
    var_hfile = NULL;

    Py_XDECREF( var_overlapped );
    var_overlapped = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_2_lock );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_3_unlock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *var_hfile = NULL;
    PyObject *var_overlapped = NULL;
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_75f5160acff707c5be496a14d2721aea = NULL;

    struct Nuitka_FrameObject *frame_75f5160acff707c5be496a14d2721aea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_75f5160acff707c5be496a14d2721aea, codeobj_75f5160acff707c5be496a14d2721aea, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_75f5160acff707c5be496a14d2721aea = cache_frame_75f5160acff707c5be496a14d2721aea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_75f5160acff707c5be496a14d2721aea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_75f5160acff707c5be496a14d2721aea ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_msvcrt );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msvcrt );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "msvcrt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_osfhandle );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__fd );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fd );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_f;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_75f5160acff707c5be496a14d2721aea->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_75f5160acff707c5be496a14d2721aea->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_hfile == NULL );
    var_hfile = tmp_assign_source_1;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_75f5160acff707c5be496a14d2721aea->m_frame.f_lineno = 85;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_overlapped == NULL );
    var_overlapped = tmp_assign_source_2;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnlockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_hfile;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hfile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = const_int_0;
    tmp_args_element_name_5 = const_int_0;
    tmp_args_element_name_6 = const_int_pos_4294901760;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_byref );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byref );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_overlapped;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_75f5160acff707c5be496a14d2721aea->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_75f5160acff707c5be496a14d2721aea->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_3;

    tmp_bool_arg_1 = var_ret;

    CHECK_OBJECT( tmp_bool_arg_1 );
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_75f5160acff707c5be496a14d2721aea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_75f5160acff707c5be496a14d2721aea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_75f5160acff707c5be496a14d2721aea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_75f5160acff707c5be496a14d2721aea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_75f5160acff707c5be496a14d2721aea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_75f5160acff707c5be496a14d2721aea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_75f5160acff707c5be496a14d2721aea,
        type_description_1,
        par_f,
        var_hfile,
        var_overlapped,
        var_ret
    );


    // Release cached frame.
    if ( frame_75f5160acff707c5be496a14d2721aea == cache_frame_75f5160acff707c5be496a14d2721aea )
    {
        Py_DECREF( frame_75f5160acff707c5be496a14d2721aea );
    }
    cache_frame_75f5160acff707c5be496a14d2721aea = NULL;

    assertFrameObject( frame_75f5160acff707c5be496a14d2721aea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_3_unlock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_hfile );
    var_hfile = NULL;

    Py_XDECREF( var_overlapped );
    var_overlapped = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_hfile );
    var_hfile = NULL;

    Py_XDECREF( var_overlapped );
    var_overlapped = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_3_unlock );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_4_lock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_flags = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_4_lock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_4_lock );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_5_unlock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_5_unlock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_5_unlock );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_6_lock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_flags = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_61ca6b2c9b5bb9ff5da55aeecae2510a = NULL;

    struct Nuitka_FrameObject *frame_61ca6b2c9b5bb9ff5da55aeecae2510a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61ca6b2c9b5bb9ff5da55aeecae2510a, codeobj_61ca6b2c9b5bb9ff5da55aeecae2510a, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61ca6b2c9b5bb9ff5da55aeecae2510a = cache_frame_61ca6b2c9b5bb9ff5da55aeecae2510a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61ca6b2c9b5bb9ff5da55aeecae2510a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flock );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__fd );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fd );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_f;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_61ca6b2c9b5bb9ff5da55aeecae2510a->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_flags;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_61ca6b2c9b5bb9ff5da55aeecae2510a->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_ret;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61ca6b2c9b5bb9ff5da55aeecae2510a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61ca6b2c9b5bb9ff5da55aeecae2510a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61ca6b2c9b5bb9ff5da55aeecae2510a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61ca6b2c9b5bb9ff5da55aeecae2510a,
        type_description_1,
        par_f,
        par_flags,
        var_ret
    );


    // Release cached frame.
    if ( frame_61ca6b2c9b5bb9ff5da55aeecae2510a == cache_frame_61ca6b2c9b5bb9ff5da55aeecae2510a )
    {
        Py_DECREF( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );
    }
    cache_frame_61ca6b2c9b5bb9ff5da55aeecae2510a = NULL;

    assertFrameObject( frame_61ca6b2c9b5bb9ff5da55aeecae2510a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_6_lock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_6_lock );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$core$files$locks$$$function_7_unlock( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_754dda2fde10ea6e8429d1363b906556 = NULL;

    struct Nuitka_FrameObject *frame_754dda2fde10ea6e8429d1363b906556;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_754dda2fde10ea6e8429d1363b906556, codeobj_754dda2fde10ea6e8429d1363b906556, module_django$core$files$locks, sizeof(void *)+sizeof(void *) );
    frame_754dda2fde10ea6e8429d1363b906556 = cache_frame_754dda2fde10ea6e8429d1363b906556;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_754dda2fde10ea6e8429d1363b906556 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_754dda2fde10ea6e8429d1363b906556 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flock );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__fd );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fd );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_f;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_754dda2fde10ea6e8429d1363b906556->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_LOCK_UN );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_754dda2fde10ea6e8429d1363b906556->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_ret;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_754dda2fde10ea6e8429d1363b906556 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_754dda2fde10ea6e8429d1363b906556 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_754dda2fde10ea6e8429d1363b906556 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_754dda2fde10ea6e8429d1363b906556, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_754dda2fde10ea6e8429d1363b906556->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_754dda2fde10ea6e8429d1363b906556, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_754dda2fde10ea6e8429d1363b906556,
        type_description_1,
        par_f,
        var_ret
    );


    // Release cached frame.
    if ( frame_754dda2fde10ea6e8429d1363b906556 == cache_frame_754dda2fde10ea6e8429d1363b906556 )
    {
        Py_DECREF( frame_754dda2fde10ea6e8429d1363b906556 );
    }
    cache_frame_754dda2fde10ea6e8429d1363b906556 = NULL;

    assertFrameObject( frame_754dda2fde10ea6e8429d1363b906556 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_7_unlock );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks$$$function_7_unlock );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_1__fd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_1__fd,
        const_str_plain__fd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3938a5a0188e9b7b8f965c13a42da02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        const_str_digest_42df17691a5bdc07c8cd155c12459e20,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_2_lock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_2_lock,
        const_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c3c1063fe187dbd2403898bb2e8055d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_3_unlock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_3_unlock,
        const_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_75f5160acff707c5be496a14d2721aea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_4_lock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_4_lock,
        const_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7fcdb4b7c4c569c475fc0676188858b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_5_unlock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_5_unlock,
        const_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4e4c4695a57a2669ee0ea1b7c37b83dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_6_lock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_6_lock,
        const_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_61ca6b2c9b5bb9ff5da55aeecae2510a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$locks$$$function_7_unlock(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$locks$$$function_7_unlock,
        const_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_754dda2fde10ea6e8429d1363b906556,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$locks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$files$locks =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.locks",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( django$core$files$locks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$files$locks );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.files.locks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.files.locks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$files$locks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$files$locks = Py_InitModule4(
        "django.core.files.locks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$files$locks = PyModule_Create( &mdef_django$core$files$locks );
#endif

    moduledict_django$core$files$locks = MODULE_DICT( module_django$core$files$locks );

    CHECK_OBJECT( module_django$core$files$locks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a626a13b3058349d2afa437ad8ee7321, module_django$core$files$locks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var__fields_ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var__anonymous_ = NULL;
    PyObject *outline_1_var__fields_ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var__anonymous_ = NULL;
    PyObject *outline_2_var__fields_ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    bool tmp_is_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    static struct Nuitka_FrameObject *cache_frame_40341d5e5e2984a18e19b66db6a0e884_2 = NULL;

    struct Nuitka_FrameObject *frame_40341d5e5e2984a18e19b66db6a0e884_2;

    static struct Nuitka_FrameObject *cache_frame_7b4509389074ffb30c3584e7115760c7_3 = NULL;

    struct Nuitka_FrameObject *frame_7b4509389074ffb30c3584e7115760c7_3;

    static struct Nuitka_FrameObject *cache_frame_947af7aea6e96dca2c1de6a2b46258ce_4 = NULL;

    struct Nuitka_FrameObject *frame_947af7aea6e96dca2c1de6a2b46258ce_4;

    struct Nuitka_FrameObject *frame_fd974b0a1fabefe5f5cf60490c008aa4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_99914ea3406ca8c61c220e86b8483279;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_fd974b0a1fabefe5f5cf60490c008aa4 = MAKE_MODULE_FRAME( codeobj_fd974b0a1fabefe5f5cf60490c008aa4, module_django$core$files$locks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fd974b0a1fabefe5f5cf60490c008aa4 );
    assert( Py_REFCNT( frame_fd974b0a1fabefe5f5cf60490c008aa4 ) == 2 );

    // Framed code:
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_1 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_1 = NULL;
        }
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_a626a13b3058349d2afa437ad8ee7321;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_09be10fde7aee5d022fb2ff0b2af134a;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$files$locks;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 19;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_django$core$files$locks$$$function_1__fd(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__fd, tmp_assign_source_9 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_nt;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_2 = const_str_plain_msvcrt;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$files$locks;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 30;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( tmp_assign_source_10 != NULL );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_msvcrt, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_plain_ctypes;
    tmp_globals_name_3 = (PyObject *)moduledict_django$core$files$locks;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_41262bb03efc4aabbd698d042a38c3e8_tuple;
    tmp_level_name_3 = const_int_0;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 31;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_sizeof );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_sizeof, tmp_assign_source_12 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_c_ulong );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_ulong, tmp_assign_source_13 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_c_void_p );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_void_p, tmp_assign_source_14 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_c_int64 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_int64, tmp_assign_source_15 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Structure );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_Structure, tmp_assign_source_16 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Union );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_Union, tmp_assign_source_17 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_POINTER );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_POINTER, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_windll );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_windll, tmp_assign_source_19 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_byref );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_byref, tmp_assign_source_20 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_4 = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_globals_name_4 = (PyObject *)moduledict_django$core$files$locks;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_BOOL_str_plain_DWORD_str_plain_HANDLE_tuple;
    tmp_level_name_4 = const_int_0;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 33;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_BOOL );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_22 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_DWORD );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_23 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_HANDLE );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_24 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_25 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_SH, tmp_assign_source_25 );
    tmp_assign_source_26 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_NB, tmp_assign_source_26 );
    tmp_assign_source_27 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_EX, tmp_assign_source_27 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_compare_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_int64 );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int64 );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_int64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_28 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_29 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_assign_source_29 == NULL ))
    {
        tmp_assign_source_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_29 );
    branch_end_2:;
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_PVOID, tmp_assign_source_30 );
    // Tried code:
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_31;

    tmp_assign_source_32 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 48;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_33;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain__OFFSET;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 48;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_34 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_34;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_36 = const_str_digest_a626a13b3058349d2afa437ad8ee7321;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_36 );
    outline_0_var___module__ = tmp_assign_source_36;

    tmp_assign_source_37 = const_str_plain__OFFSET;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_0_var___qualname__ = tmp_assign_source_37;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40341d5e5e2984a18e19b66db6a0e884_2, codeobj_40341d5e5e2984a18e19b66db6a0e884, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40341d5e5e2984a18e19b66db6a0e884_2 = cache_frame_40341d5e5e2984a18e19b66db6a0e884_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40341d5e5e2984a18e19b66db6a0e884_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40341d5e5e2984a18e19b66db6a0e884_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_38 = PyList_New( 2 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_Offset;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyDict_GetItem( locals_dict_1, const_str_plain_DWORD );

    if ( tmp_tuple_element_3 == NULL )
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_38 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_2 = "NooN";
            goto frame_exception_exit_2;
        }

    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_38, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_OffsetHigh;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = PyDict_GetItem( locals_dict_1, const_str_plain_DWORD );

    if ( tmp_tuple_element_4 == NULL )
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_4 == NULL ))
        {
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_38 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_2 = "NooN";
            goto frame_exception_exit_2;
        }

    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_38, 1, tmp_list_element_1 );
    assert( outline_0_var__fields_ == NULL );
    outline_0_var__fields_ = tmp_assign_source_38;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_40341d5e5e2984a18e19b66db6a0e884_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40341d5e5e2984a18e19b66db6a0e884_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40341d5e5e2984a18e19b66db6a0e884_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40341d5e5e2984a18e19b66db6a0e884_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40341d5e5e2984a18e19b66db6a0e884_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40341d5e5e2984a18e19b66db6a0e884_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var__fields_
    );


    // Release cached frame.
    if ( frame_40341d5e5e2984a18e19b66db6a0e884_2 == cache_frame_40341d5e5e2984a18e19b66db6a0e884_2 )
    {
        Py_DECREF( frame_40341d5e5e2984a18e19b66db6a0e884_2 );
    }
    cache_frame_40341d5e5e2984a18e19b66db6a0e884_2 = NULL;

    assertFrameObject( frame_40341d5e5e2984a18e19b66db6a0e884_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain__OFFSET;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_5 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 48;

        goto try_except_handler_4;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 48;

        goto try_except_handler_4;
    }
    if ( outline_0_var__fields_ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain__fields_,
            outline_0_var__fields_
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain__fields_
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain__fields_
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 48;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 48;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var__fields_ );
    outline_0_var__fields_ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var__fields_ );
    outline_0_var__fields_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 48;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_35 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__OFFSET, tmp_assign_source_35 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_Union );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Union );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Union" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_41;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_42 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 53;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_42;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    branch_no_4:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_3 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_7 = const_str_plain__OFFSET_UNION;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_7 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 53;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_43;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_45 = const_str_digest_a626a13b3058349d2afa437ad8ee7321;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_45 );
    outline_1_var___module__ = tmp_assign_source_45;

    tmp_assign_source_46 = const_str_plain__OFFSET_UNION;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_46 );
    outline_1_var___qualname__ = tmp_assign_source_46;

    tmp_assign_source_47 = LIST_COPY( const_list_str_plain__offset_list );
    assert( outline_1_var__anonymous_ == NULL );
    outline_1_var__anonymous_ = tmp_assign_source_47;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b4509389074ffb30c3584e7115760c7_3, codeobj_7b4509389074ffb30c3584e7115760c7, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b4509389074ffb30c3584e7115760c7_3 = cache_frame_7b4509389074ffb30c3584e7115760c7_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b4509389074ffb30c3584e7115760c7_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b4509389074ffb30c3584e7115760c7_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_48 = PyList_New( 2 );
    tmp_list_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain__offset;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = PyDict_GetItem( locals_dict_2, const_str_plain__OFFSET );

    if ( tmp_tuple_element_8 == NULL )
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__OFFSET );

        if (unlikely( tmp_tuple_element_8 == NULL ))
        {
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OFFSET );
        }

        if ( tmp_tuple_element_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_48 );
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OFFSET" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            type_description_2 = "NoooN";
            goto frame_exception_exit_3;
        }

    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_8 );
    PyList_SET_ITEM( tmp_assign_source_48, 0, tmp_list_element_2 );
    tmp_list_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_9 = const_str_plain_Pointer;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = PyDict_GetItem( locals_dict_2, const_str_plain_PVOID );

    if ( tmp_tuple_element_9 == NULL )
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_PVOID );

        if (unlikely( tmp_tuple_element_9 == NULL ))
        {
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PVOID );
        }

        if ( tmp_tuple_element_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_48 );
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PVOID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_2 = "NoooN";
            goto frame_exception_exit_3;
        }

    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_9 );
    PyList_SET_ITEM( tmp_assign_source_48, 1, tmp_list_element_2 );
    assert( outline_1_var__fields_ == NULL );
    outline_1_var__fields_ = tmp_assign_source_48;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b4509389074ffb30c3584e7115760c7_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b4509389074ffb30c3584e7115760c7_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b4509389074ffb30c3584e7115760c7_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b4509389074ffb30c3584e7115760c7_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b4509389074ffb30c3584e7115760c7_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b4509389074ffb30c3584e7115760c7_3,
        type_description_2,
        NULL,
        outline_1_var___qualname__,
        outline_1_var___module__,
        outline_1_var__anonymous_,
        outline_1_var__fields_
    );


    // Release cached frame.
    if ( frame_7b4509389074ffb30c3584e7115760c7_3 == cache_frame_7b4509389074ffb30c3584e7115760c7_3 )
    {
        Py_DECREF( frame_7b4509389074ffb30c3584e7115760c7_3 );
    }
    cache_frame_7b4509389074ffb30c3584e7115760c7_3 = NULL;

    assertFrameObject( frame_7b4509389074ffb30c3584e7115760c7_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    tmp_called_name_7 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_10 = const_str_plain__OFFSET_UNION;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_10 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_10,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_10,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_10,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_10 );

        exception_lineno = 53;

        goto try_except_handler_6;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_10,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_10,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_10,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_10 );

        exception_lineno = 53;

        goto try_except_handler_6;
    }
    if ( outline_1_var__anonymous_ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_10,
            const_str_plain__anonymous_,
            outline_1_var__anonymous_
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_10,
            const_str_plain__anonymous_
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_10,
                const_str_plain__anonymous_
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_10 );

        exception_lineno = 53;

        goto try_except_handler_6;
    }
    if ( outline_1_var__fields_ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_10,
            const_str_plain__fields_,
            outline_1_var__fields_
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_10,
            const_str_plain__fields_
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_10,
                const_str_plain__fields_
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_10 );

        exception_lineno = 53;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_10 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 53;
    tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_49;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var__anonymous_ );
    outline_1_var__anonymous_ = NULL;

    Py_XDECREF( outline_1_var__fields_ );
    outline_1_var__fields_ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var__anonymous_ );
    outline_1_var__anonymous_ = NULL;

    Py_XDECREF( outline_1_var__fields_ );
    outline_1_var__fields_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 53;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_44 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__OFFSET_UNION, tmp_assign_source_44 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_50 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_11 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_50;

    tmp_assign_source_51 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_51;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_3 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_52 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 59;

        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_52;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_4 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_OVERLAPPED;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_12 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 59;
    tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_53 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_53;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_55 = const_str_digest_a626a13b3058349d2afa437ad8ee7321;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_55 );
    outline_2_var___module__ = tmp_assign_source_55;

    tmp_assign_source_56 = const_str_plain_OVERLAPPED;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_56 );
    outline_2_var___qualname__ = tmp_assign_source_56;

    tmp_assign_source_57 = LIST_COPY( const_list_str_plain__offset_union_list );
    assert( outline_2_var__anonymous_ == NULL );
    outline_2_var__anonymous_ = tmp_assign_source_57;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_947af7aea6e96dca2c1de6a2b46258ce_4, codeobj_947af7aea6e96dca2c1de6a2b46258ce, module_django$core$files$locks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_947af7aea6e96dca2c1de6a2b46258ce_4 = cache_frame_947af7aea6e96dca2c1de6a2b46258ce_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_947af7aea6e96dca2c1de6a2b46258ce_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_947af7aea6e96dca2c1de6a2b46258ce_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_58 = PyList_New( 4 );
    tmp_list_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_13 = const_str_plain_Internal;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = PyDict_GetItem( locals_dict_3, const_str_plain_ULONG_PTR );

    if ( tmp_tuple_element_13 == NULL )
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

        if (unlikely( tmp_tuple_element_13 == NULL ))
        {
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
        }

        if ( tmp_tuple_element_13 == NULL )
        {
            Py_DECREF( tmp_assign_source_58 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_2 = "NoooN";
            goto frame_exception_exit_4;
        }

    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_13 );
    PyList_SET_ITEM( tmp_assign_source_58, 0, tmp_list_element_3 );
    tmp_list_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_InternalHigh;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = PyDict_GetItem( locals_dict_3, const_str_plain_ULONG_PTR );

    if ( tmp_tuple_element_14 == NULL )
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

        if (unlikely( tmp_tuple_element_14 == NULL ))
        {
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
        }

        if ( tmp_tuple_element_14 == NULL )
        {
            Py_DECREF( tmp_assign_source_58 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_2 = "NoooN";
            goto frame_exception_exit_4;
        }

    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_14 );
    PyList_SET_ITEM( tmp_assign_source_58, 1, tmp_list_element_3 );
    tmp_list_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_15 = const_str_plain__offset_union;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = PyDict_GetItem( locals_dict_3, const_str_plain__OFFSET_UNION );

    if ( tmp_tuple_element_15 == NULL )
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain__OFFSET_UNION );

        if (unlikely( tmp_tuple_element_15 == NULL ))
        {
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OFFSET_UNION );
        }

        if ( tmp_tuple_element_15 == NULL )
        {
            Py_DECREF( tmp_assign_source_58 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OFFSET_UNION" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 64;
            type_description_2 = "NoooN";
            goto frame_exception_exit_4;
        }

    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_15 );
    PyList_SET_ITEM( tmp_assign_source_58, 2, tmp_list_element_3 );
    tmp_list_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_hEvent;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = PyDict_GetItem( locals_dict_3, const_str_plain_HANDLE );

    if ( tmp_tuple_element_16 == NULL )
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_HANDLE );

        if (unlikely( tmp_tuple_element_16 == NULL ))
        {
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
        }

        if ( tmp_tuple_element_16 == NULL )
        {
            Py_DECREF( tmp_assign_source_58 );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_2 = "NoooN";
            goto frame_exception_exit_4;
        }

    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_16 );
    PyList_SET_ITEM( tmp_assign_source_58, 3, tmp_list_element_3 );
    assert( outline_2_var__fields_ == NULL );
    outline_2_var__fields_ = tmp_assign_source_58;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_947af7aea6e96dca2c1de6a2b46258ce_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_947af7aea6e96dca2c1de6a2b46258ce_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_947af7aea6e96dca2c1de6a2b46258ce_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_947af7aea6e96dca2c1de6a2b46258ce_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_947af7aea6e96dca2c1de6a2b46258ce_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_947af7aea6e96dca2c1de6a2b46258ce_4,
        type_description_2,
        NULL,
        outline_2_var___qualname__,
        outline_2_var___module__,
        outline_2_var__anonymous_,
        outline_2_var__fields_
    );


    // Release cached frame.
    if ( frame_947af7aea6e96dca2c1de6a2b46258ce_4 == cache_frame_947af7aea6e96dca2c1de6a2b46258ce_4 )
    {
        Py_DECREF( frame_947af7aea6e96dca2c1de6a2b46258ce_4 );
    }
    cache_frame_947af7aea6e96dca2c1de6a2b46258ce_4 = NULL;

    assertFrameObject( frame_947af7aea6e96dca2c1de6a2b46258ce_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_8;
    skip_nested_handling_3:;
    tmp_called_name_9 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_17 = const_str_plain_OVERLAPPED;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_17 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 59;

        goto try_except_handler_8;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 59;

        goto try_except_handler_8;
    }
    if ( outline_2_var__anonymous_ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain__anonymous_,
            outline_2_var__anonymous_
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain__anonymous_
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain__anonymous_
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 59;

        goto try_except_handler_8;
    }
    if ( outline_2_var__fields_ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain__fields_,
            outline_2_var__fields_
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain__fields_
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain__fields_
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 59;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_17 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 59;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_8;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_59;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var__anonymous_ );
    outline_2_var__anonymous_ = NULL;

    Py_XDECREF( outline_2_var__fields_ );
    outline_2_var__fields_ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var__anonymous_ );
    outline_2_var__anonymous_ = NULL;

    Py_XDECREF( outline_2_var__fields_ );
    outline_2_var__fields_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 59;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_54 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_OVERLAPPED, tmp_assign_source_54 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OVERLAPPED );
    }

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED, tmp_assign_source_60 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_windll );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_windll );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "windll" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_kernel32 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_LockFileEx );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LockFileEx, tmp_assign_source_61 );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LockFileEx );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LockFileEx );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_restype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyList_New( 6 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 0, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 1, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 2, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 3, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 4, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_2, 5, tmp_list_element_4 );
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LockFileEx );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LockFileEx );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_argtypes, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_windll );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_windll );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "windll" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_kernel32 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_62 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_UnlockFileEx );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_UnlockFileEx, tmp_assign_source_62 );
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnlockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_restype, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = PyList_New( 5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_4, 0, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_4, 1, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_4, 2, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_4, 3, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_4, 4, tmp_list_element_5 );
    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnlockFileEx );
    }

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnlockFileEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_argtypes, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assign_source_63 = MAKE_FUNCTION_django$core$files$locks$$$function_2_lock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_lock, tmp_assign_source_63 );
    tmp_assign_source_64 = MAKE_FUNCTION_django$core$files$locks$$$function_3_unlock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_unlock, tmp_assign_source_64 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_65 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_65 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_65;

    // Tried code:
    // Tried code:
    tmp_name_name_5 = const_str_plain_fcntl;
    tmp_globals_name_5 = (PyObject *)moduledict_django$core$files$locks;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = 90;
    tmp_assign_source_66 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl, tmp_assign_source_66 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;

        goto try_except_handler_10;
    }

    tmp_assign_source_67 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_LOCK_SH );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_SH, tmp_assign_source_67 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;

        goto try_except_handler_10;
    }

    tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_LOCK_NB );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_NB, tmp_assign_source_68 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_fcntl );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fcntl );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fcntl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;

        goto try_except_handler_10;
    }

    tmp_assign_source_69 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_LOCK_EX );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_EX, tmp_assign_source_69 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_70 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_70;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_XDECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_fd974b0a1fabefe5f5cf60490c008aa4, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_fd974b0a1fabefe5f5cf60490c008aa4, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyTuple_New( 2 );
    tmp_tuple_element_18 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 1, tmp_tuple_element_18 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_9 );

        exception_lineno = 94;

        goto try_except_handler_11;
    }
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_71 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_EX, tmp_assign_source_71 );
    tmp_assign_source_72 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_SH, tmp_assign_source_72 );
    tmp_assign_source_73 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_LOCK_NB, tmp_assign_source_73 );
    tmp_assign_source_74 = MAKE_FUNCTION_django$core$files$locks$$$function_4_lock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_lock, tmp_assign_source_74 );
    tmp_assign_source_75 = MAKE_FUNCTION_django$core$files$locks$$$function_5_unlock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_unlock, tmp_assign_source_75 );
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 89;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame) frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_11;
    branch_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$locks );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    tmp_compare_left_10 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = Py_True;
    tmp_is_1 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if ( tmp_is_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_76 = MAKE_FUNCTION_django$core$files$locks$$$function_6_lock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_lock, tmp_assign_source_76 );
    tmp_assign_source_77 = MAKE_FUNCTION_django$core$files$locks$$$function_7_unlock(  );
    UPDATE_STRING_DICT1( moduledict_django$core$files$locks, (Nuitka_StringObject *)const_str_plain_unlock, tmp_assign_source_77 );
    branch_no_7:;
    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_end_1:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fd974b0a1fabefe5f5cf60490c008aa4 );
#endif
    popFrameStack();

    assertFrameObject( frame_fd974b0a1fabefe5f5cf60490c008aa4 );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fd974b0a1fabefe5f5cf60490c008aa4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd974b0a1fabefe5f5cf60490c008aa4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd974b0a1fabefe5f5cf60490c008aa4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd974b0a1fabefe5f5cf60490c008aa4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;

    return MOD_RETURN_VALUE( module_django$core$files$locks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
