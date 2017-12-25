/* Generated code for Python source for module 'PIL.ImageChops'
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

/* The _module_PIL$ImageChops is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageChops;
PyDictObject *moduledict_PIL$ImageChops;

/* The module constants used, if any. */
static PyObject *const_str_digest_fecfb5f39fe7667c7b8e2cd1407dbe1f;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_blend;
static PyObject *const_str_digest_da0dca45318b0e88a977cc534db2c085;
extern PyObject *const_str_plain_image2;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_scale;
static PyObject *const_str_plain_chop_invert;
static PyObject *const_str_plain_logical_xor;
static PyObject *const_str_digest_2366abc32a7a698ab8b1f922bf783013;
extern PyObject *const_str_plain_composite;
static PyObject *const_str_plain_invert;
extern PyObject *const_str_plain_subtract_modulo;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_image;
static PyObject *const_str_digest_4370b1b3b2074d3d00405f9d1d8d178b;
static PyObject *const_str_digest_330931758f0ece41f45b97f63bd1d3cc;
static PyObject *const_str_digest_7a1209d1854cbcf06696854b4882a7a5;
static PyObject *const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple;
static PyObject *const_str_plain_chop_multiply;
static PyObject *const_str_digest_a862fd76eeff5a9f507a7e5d2a0312c8;
static PyObject *const_str_plain_subtract;
static PyObject *const_str_plain_chop_screen;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_duplicate;
extern PyObject *const_str_plain_L;
static PyObject *const_str_digest_6a926b0689d31da427d8fe0b29954f28;
extern PyObject *const_str_plain_PIL;
static PyObject *const_str_digest_3893df2bd9c1616d14221872463ae4b5;
static PyObject *const_str_digest_f4e79a5be5e51f17a11d6fddab1e54f6;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_add;
static PyObject *const_str_digest_ae9bde4c3dc946b12274a0d1859ca677;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_75d3ca04904dd8d83bb88c84b3351182;
static PyObject *const_str_plain_screen;
static PyObject *const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_mask;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_new;
static PyObject *const_str_digest_b42909581e7a9e471d384490ea7d49d8;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_27e372b8bb0991bd3ce7697077379f9a;
static PyObject *const_tuple_float_1_0_int_0_tuple;
extern PyObject *const_str_plain__new;
static PyObject *const_tuple_str_plain_image_str_plain_value_tuple;
static PyObject *const_str_plain_add_modulo;
static PyObject *const_str_digest_f4cac0c5e4abca9248a1bd56963b9635;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_3e0519114973f2ac39322526e664803d;
extern PyObject *const_tuple_str_plain_Image_tuple;
static PyObject *const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple;
static PyObject *const_tuple_str_plain_image1_str_plain_image2_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain_chop_darker;
static PyObject *const_str_plain_chop_difference;
static PyObject *const_str_plain_logical_or;
static PyObject *const_str_plain_logical_and;
static PyObject *const_str_digest_80ed5aa5d813a5989d5e2be433f0ecd8;
static PyObject *const_str_plain_chop_and;
static PyObject *const_str_plain_chop_xor;
static PyObject *const_str_plain_darker;
extern PyObject *const_tuple_str_plain_image_tuple;
static PyObject *const_str_plain_chop_add_modulo;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_chop_or;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_chop_subtract_modulo;
static PyObject *const_str_plain_lighter;
extern PyObject *const_str_plain_difference;
static PyObject *const_str_digest_4e6cca9d73a0a308915783f62cb797b4;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_xoffset;
static PyObject *const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple;
static PyObject *const_str_plain_chop_subtract;
extern PyObject *const_str_plain_image1;
extern PyObject *const_str_plain_yoffset;
static PyObject *const_str_plain_chop_add;
extern PyObject *const_str_plain_im;
static PyObject *const_str_plain_multiply;
extern PyObject *const_str_plain_Image;
static PyObject *const_str_digest_80ed6d1c7ec0e9e4403bd654814fa1fa;
extern PyObject *const_str_plain_constant;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_d30b936479ee3718a769e023931a08cc;
static PyObject *const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple;
static PyObject *const_str_plain_chop_lighter;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_fecfb5f39fe7667c7b8e2cd1407dbe1f = UNSTREAM_STRING( &constant_bin[ 49764 ], 195, 0 );
    const_str_digest_da0dca45318b0e88a977cc534db2c085 = UNSTREAM_STRING( &constant_bin[ 49959 ], 382, 0 );
    const_str_plain_chop_invert = UNSTREAM_STRING( &constant_bin[ 50341 ], 11, 1 );
    const_str_plain_logical_xor = UNSTREAM_STRING( &constant_bin[ 50352 ], 11, 1 );
    const_str_digest_2366abc32a7a698ab8b1f922bf783013 = UNSTREAM_STRING( &constant_bin[ 50363 ], 14, 0 );
    const_str_plain_invert = UNSTREAM_STRING( &constant_bin[ 49786 ], 6, 1 );
    const_str_digest_4370b1b3b2074d3d00405f9d1d8d178b = UNSTREAM_STRING( &constant_bin[ 50377 ], 263, 0 );
    const_str_digest_330931758f0ece41f45b97f63bd1d3cc = UNSTREAM_STRING( &constant_bin[ 50640 ], 143, 0 );
    const_str_digest_7a1209d1854cbcf06696854b4882a7a5 = UNSTREAM_STRING( &constant_bin[ 50783 ], 160, 0 );
    const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 0, const_str_plain_image1 ); Py_INCREF( const_str_plain_image1 );
    PyTuple_SET_ITEM( const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 1, const_str_plain_image2 ); Py_INCREF( const_str_plain_image2 );
    PyTuple_SET_ITEM( const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 2, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 3, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    const_str_plain_chop_multiply = UNSTREAM_STRING( &constant_bin[ 50943 ], 13, 1 );
    const_str_digest_a862fd76eeff5a9f507a7e5d2a0312c8 = UNSTREAM_STRING( &constant_bin[ 50956 ], 203, 0 );
    const_str_plain_subtract = UNSTREAM_STRING( &constant_bin[ 51159 ], 8, 1 );
    const_str_plain_chop_screen = UNSTREAM_STRING( &constant_bin[ 51167 ], 11, 1 );
    const_str_digest_6a926b0689d31da427d8fe0b29954f28 = UNSTREAM_STRING( &constant_bin[ 51178 ], 17, 0 );
    const_str_digest_3893df2bd9c1616d14221872463ae4b5 = UNSTREAM_STRING( &constant_bin[ 51195 ], 160, 0 );
    const_str_digest_f4e79a5be5e51f17a11d6fddab1e54f6 = UNSTREAM_STRING( &constant_bin[ 51355 ], 149, 0 );
    const_str_digest_ae9bde4c3dc946b12274a0d1859ca677 = UNSTREAM_STRING( &constant_bin[ 51504 ], 147, 0 );
    const_str_digest_75d3ca04904dd8d83bb88c84b3351182 = UNSTREAM_STRING( &constant_bin[ 51651 ], 86, 0 );
    const_str_plain_screen = UNSTREAM_STRING( &constant_bin[ 51172 ], 6, 1 );
    const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603 = UNSTREAM_STRING( &constant_bin[ 51737 ], 23, 0 );
    const_str_digest_b42909581e7a9e471d384490ea7d49d8 = UNSTREAM_STRING( &constant_bin[ 51760 ], 140, 0 );
    const_str_digest_27e372b8bb0991bd3ce7697077379f9a = UNSTREAM_STRING( &constant_bin[ 51900 ], 213, 0 );
    const_tuple_float_1_0_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_0_tuple, 0, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_image_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image_str_plain_value_tuple, 0, const_str_plain_image ); Py_INCREF( const_str_plain_image );
    PyTuple_SET_ITEM( const_tuple_str_plain_image_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_add_modulo = UNSTREAM_STRING( &constant_bin[ 52113 ], 10, 1 );
    const_str_digest_f4cac0c5e4abca9248a1bd56963b9635 = UNSTREAM_STRING( &constant_bin[ 52123 ], 310, 0 );
    const_str_digest_3e0519114973f2ac39322526e664803d = UNSTREAM_STRING( &constant_bin[ 52433 ], 105, 0 );
    const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple, 0, const_str_plain_image ); Py_INCREF( const_str_plain_image );
    PyTuple_SET_ITEM( const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple, 1, const_str_plain_xoffset ); Py_INCREF( const_str_plain_xoffset );
    PyTuple_SET_ITEM( const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple, 2, const_str_plain_yoffset ); Py_INCREF( const_str_plain_yoffset );
    const_tuple_str_plain_image1_str_plain_image2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_tuple, 0, const_str_plain_image1 ); Py_INCREF( const_str_plain_image1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_tuple, 1, const_str_plain_image2 ); Py_INCREF( const_str_plain_image2 );
    const_str_plain_chop_darker = UNSTREAM_STRING( &constant_bin[ 52538 ], 11, 1 );
    const_str_plain_chop_difference = UNSTREAM_STRING( &constant_bin[ 52549 ], 15, 1 );
    const_str_plain_logical_or = UNSTREAM_STRING( &constant_bin[ 52564 ], 10, 1 );
    const_str_plain_logical_and = UNSTREAM_STRING( &constant_bin[ 52574 ], 11, 1 );
    const_str_digest_80ed5aa5d813a5989d5e2be433f0ecd8 = UNSTREAM_STRING( &constant_bin[ 52585 ], 133, 0 );
    const_str_plain_chop_and = UNSTREAM_STRING( &constant_bin[ 52718 ], 8, 1 );
    const_str_plain_chop_xor = UNSTREAM_STRING( &constant_bin[ 52726 ], 8, 1 );
    const_str_plain_darker = UNSTREAM_STRING( &constant_bin[ 51989 ], 6, 1 );
    const_str_plain_chop_add_modulo = UNSTREAM_STRING( &constant_bin[ 52734 ], 15, 1 );
    const_str_plain_chop_or = UNSTREAM_STRING( &constant_bin[ 52749 ], 7, 1 );
    const_str_plain_chop_subtract_modulo = UNSTREAM_STRING( &constant_bin[ 52756 ], 20, 1 );
    const_str_plain_lighter = UNSTREAM_STRING( &constant_bin[ 52776 ], 7, 1 );
    const_str_digest_4e6cca9d73a0a308915783f62cb797b4 = UNSTREAM_STRING( &constant_bin[ 52783 ], 214, 0 );
    const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple, 0, const_str_plain_image1 ); Py_INCREF( const_str_plain_image1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple, 1, const_str_plain_image2 ); Py_INCREF( const_str_plain_image2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_plain_chop_subtract = UNSTREAM_STRING( &constant_bin[ 52756 ], 13, 1 );
    const_str_plain_chop_add = UNSTREAM_STRING( &constant_bin[ 52734 ], 8, 1 );
    const_str_plain_multiply = UNSTREAM_STRING( &constant_bin[ 50948 ], 8, 1 );
    const_str_digest_80ed6d1c7ec0e9e4403bd654814fa1fa = UNSTREAM_STRING( &constant_bin[ 52997 ], 258, 0 );
    const_str_digest_d30b936479ee3718a769e023931a08cc = UNSTREAM_STRING( &constant_bin[ 53255 ], 165, 0 );
    const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple, 0, const_str_plain_image1 ); Py_INCREF( const_str_plain_image1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple, 1, const_str_plain_image2 ); Py_INCREF( const_str_plain_image2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple, 2, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    const_str_plain_chop_lighter = UNSTREAM_STRING( &constant_bin[ 53420 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$ImageChops( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_94cf4c0cb328f52e80ea8dc6832d32f1;
static PyCodeObject *codeobj_c64ac73b06df2e48acd5aa941d3b5d66;
static PyCodeObject *codeobj_11703e5e7ed781426049fc28dd6f5d77;
static PyCodeObject *codeobj_c634f96d830f3e057e11cb9f12cb56d2;
static PyCodeObject *codeobj_d53e07200ebd39ff042da0f424750492;
static PyCodeObject *codeobj_508a06384b08905fb54da74fcf7634f5;
static PyCodeObject *codeobj_dd5723e52ee9bc360596eac5c2989727;
static PyCodeObject *codeobj_01065398b2219a76715e7d9436a37a7b;
static PyCodeObject *codeobj_243c993ecb447aa7b0125309780a0393;
static PyCodeObject *codeobj_009141ab640bb029b7fe0ddb2702e8ad;
static PyCodeObject *codeobj_ec497da232e98bab1e095a655688109c;
static PyCodeObject *codeobj_f9f4e4c33e8ed2a02c8509354fd6f91e;
static PyCodeObject *codeobj_8696539e7068a10573a2e73f4cb6cb86;
static PyCodeObject *codeobj_5b698fa60657afb009488295bdf5f523;
static PyCodeObject *codeobj_0d4d88fc3405354a16940d1c9a576f77;
static PyCodeObject *codeobj_f984751317114d7fd1fc7b6b096e83eb;
static PyCodeObject *codeobj_72551806a12188e4b3c0c077924180f2;
static PyCodeObject *codeobj_29ed33f1f5eb9c719af031ebb2a85312;
static PyCodeObject *codeobj_21cfabae95f347945b2651de52e8be5d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6a926b0689d31da427d8fe0b29954f28 );
    codeobj_94cf4c0cb328f52e80ea8dc6832d32f1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c64ac73b06df2e48acd5aa941d3b5d66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add, 140, const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11703e5e7ed781426049fc28dd6f5d77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_modulo, 174, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c634f96d830f3e057e11cb9f12cb56d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_blend, 249, const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d53e07200ebd39ff042da0f424750492 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_composite, 259, const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_508a06384b08905fb54da74fcf7634f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_constant, 21, const_tuple_str_plain_image_str_plain_value_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd5723e52ee9bc360596eac5c2989727 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_darker, 71, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_01065398b2219a76715e7d9436a37a7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_difference, 88, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_243c993ecb447aa7b0125309780a0393 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_duplicate, 30, const_tuple_str_plain_image_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_009141ab640bb029b7fe0ddb2702e8ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_invert, 39, const_tuple_str_plain_image_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec497da232e98bab1e095a655688109c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lighter, 54, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f9f4e4c33e8ed2a02c8509354fd6f91e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logical_and, 204, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8696539e7068a10573a2e73f4cb6cb86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logical_or, 219, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b698fa60657afb009488295bdf5f523 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logical_xor, 234, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d4d88fc3405354a16940d1c9a576f77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_multiply, 105, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f984751317114d7fd1fc7b6b096e83eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_offset, 269, const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72551806a12188e4b3c0c077924180f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_screen, 124, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29ed33f1f5eb9c719af031ebb2a85312 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_subtract, 157, const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21cfabae95f347945b2651de52e8be5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_subtract_modulo, 189, const_tuple_str_plain_image1_str_plain_image2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_10_subtract( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_11_add_modulo(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_12_subtract_modulo(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_13_logical_and(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_14_logical_or(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_15_logical_xor(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_16_blend(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_17_composite(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_18_offset( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen(  );


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_9_add( PyObject *defaults );


// The module function definitions.
static PyObject *impl_PIL$ImageChops$$$function_1_constant( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_508a06384b08905fb54da74fcf7634f5 = NULL;

    struct Nuitka_FrameObject *frame_508a06384b08905fb54da74fcf7634f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_508a06384b08905fb54da74fcf7634f5, codeobj_508a06384b08905fb54da74fcf7634f5, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_508a06384b08905fb54da74fcf7634f5 = cache_frame_508a06384b08905fb54da74fcf7634f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_508a06384b08905fb54da74fcf7634f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_508a06384b08905fb54da74fcf7634f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_L;
    tmp_source_name_2 = par_image;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_value;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_508a06384b08905fb54da74fcf7634f5->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_508a06384b08905fb54da74fcf7634f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_508a06384b08905fb54da74fcf7634f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_508a06384b08905fb54da74fcf7634f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_508a06384b08905fb54da74fcf7634f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_508a06384b08905fb54da74fcf7634f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_508a06384b08905fb54da74fcf7634f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_508a06384b08905fb54da74fcf7634f5,
        type_description_1,
        par_image,
        par_value
    );


    // Release cached frame.
    if ( frame_508a06384b08905fb54da74fcf7634f5 == cache_frame_508a06384b08905fb54da74fcf7634f5 )
    {
        Py_DECREF( frame_508a06384b08905fb54da74fcf7634f5 );
    }
    cache_frame_508a06384b08905fb54da74fcf7634f5 = NULL;

    assertFrameObject( frame_508a06384b08905fb54da74fcf7634f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_1_constant );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image );
    par_image = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

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

    Py_XDECREF( par_image );
    par_image = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_1_constant );
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


static PyObject *impl_PIL$ImageChops$$$function_2_duplicate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_243c993ecb447aa7b0125309780a0393 = NULL;

    struct Nuitka_FrameObject *frame_243c993ecb447aa7b0125309780a0393;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_243c993ecb447aa7b0125309780a0393, codeobj_243c993ecb447aa7b0125309780a0393, module_PIL$ImageChops, sizeof(void *) );
    frame_243c993ecb447aa7b0125309780a0393 = cache_frame_243c993ecb447aa7b0125309780a0393;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_243c993ecb447aa7b0125309780a0393 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_243c993ecb447aa7b0125309780a0393 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_243c993ecb447aa7b0125309780a0393->m_frame.f_lineno = 36;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_243c993ecb447aa7b0125309780a0393 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_243c993ecb447aa7b0125309780a0393 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_243c993ecb447aa7b0125309780a0393 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_243c993ecb447aa7b0125309780a0393, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_243c993ecb447aa7b0125309780a0393->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_243c993ecb447aa7b0125309780a0393, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_243c993ecb447aa7b0125309780a0393,
        type_description_1,
        par_image
    );


    // Release cached frame.
    if ( frame_243c993ecb447aa7b0125309780a0393 == cache_frame_243c993ecb447aa7b0125309780a0393 )
    {
        Py_DECREF( frame_243c993ecb447aa7b0125309780a0393 );
    }
    cache_frame_243c993ecb447aa7b0125309780a0393 = NULL;

    assertFrameObject( frame_243c993ecb447aa7b0125309780a0393 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_2_duplicate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image );
    par_image = NULL;

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

    Py_XDECREF( par_image );
    par_image = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_2_duplicate );
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


static PyObject *impl_PIL$ImageChops$$$function_3_invert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_009141ab640bb029b7fe0ddb2702e8ad = NULL;

    struct Nuitka_FrameObject *frame_009141ab640bb029b7fe0ddb2702e8ad;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_009141ab640bb029b7fe0ddb2702e8ad, codeobj_009141ab640bb029b7fe0ddb2702e8ad, module_PIL$ImageChops, sizeof(void *) );
    frame_009141ab640bb029b7fe0ddb2702e8ad = cache_frame_009141ab640bb029b7fe0ddb2702e8ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_009141ab640bb029b7fe0ddb2702e8ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_009141ab640bb029b7fe0ddb2702e8ad ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_009141ab640bb029b7fe0ddb2702e8ad->m_frame.f_lineno = 50;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_image;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_im );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_009141ab640bb029b7fe0ddb2702e8ad->m_frame.f_lineno = 51;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_chop_invert );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_009141ab640bb029b7fe0ddb2702e8ad->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009141ab640bb029b7fe0ddb2702e8ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_009141ab640bb029b7fe0ddb2702e8ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_009141ab640bb029b7fe0ddb2702e8ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_009141ab640bb029b7fe0ddb2702e8ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_009141ab640bb029b7fe0ddb2702e8ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_009141ab640bb029b7fe0ddb2702e8ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_009141ab640bb029b7fe0ddb2702e8ad,
        type_description_1,
        par_image
    );


    // Release cached frame.
    if ( frame_009141ab640bb029b7fe0ddb2702e8ad == cache_frame_009141ab640bb029b7fe0ddb2702e8ad )
    {
        Py_DECREF( frame_009141ab640bb029b7fe0ddb2702e8ad );
    }
    cache_frame_009141ab640bb029b7fe0ddb2702e8ad = NULL;

    assertFrameObject( frame_009141ab640bb029b7fe0ddb2702e8ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_3_invert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image );
    par_image = NULL;

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

    Py_XDECREF( par_image );
    par_image = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_3_invert );
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


static PyObject *impl_PIL$ImageChops$$$function_4_lighter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ec497da232e98bab1e095a655688109c = NULL;

    struct Nuitka_FrameObject *frame_ec497da232e98bab1e095a655688109c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec497da232e98bab1e095a655688109c, codeobj_ec497da232e98bab1e095a655688109c, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_ec497da232e98bab1e095a655688109c = cache_frame_ec497da232e98bab1e095a655688109c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec497da232e98bab1e095a655688109c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec497da232e98bab1e095a655688109c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ec497da232e98bab1e095a655688109c->m_frame.f_lineno = 66;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_ec497da232e98bab1e095a655688109c->m_frame.f_lineno = 67;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_lighter );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ec497da232e98bab1e095a655688109c->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ec497da232e98bab1e095a655688109c->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec497da232e98bab1e095a655688109c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec497da232e98bab1e095a655688109c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec497da232e98bab1e095a655688109c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec497da232e98bab1e095a655688109c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec497da232e98bab1e095a655688109c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec497da232e98bab1e095a655688109c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec497da232e98bab1e095a655688109c,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_ec497da232e98bab1e095a655688109c == cache_frame_ec497da232e98bab1e095a655688109c )
    {
        Py_DECREF( frame_ec497da232e98bab1e095a655688109c );
    }
    cache_frame_ec497da232e98bab1e095a655688109c = NULL;

    assertFrameObject( frame_ec497da232e98bab1e095a655688109c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_4_lighter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_4_lighter );
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


static PyObject *impl_PIL$ImageChops$$$function_5_darker( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dd5723e52ee9bc360596eac5c2989727 = NULL;

    struct Nuitka_FrameObject *frame_dd5723e52ee9bc360596eac5c2989727;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd5723e52ee9bc360596eac5c2989727, codeobj_dd5723e52ee9bc360596eac5c2989727, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_dd5723e52ee9bc360596eac5c2989727 = cache_frame_dd5723e52ee9bc360596eac5c2989727;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd5723e52ee9bc360596eac5c2989727 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd5723e52ee9bc360596eac5c2989727 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_dd5723e52ee9bc360596eac5c2989727->m_frame.f_lineno = 83;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_dd5723e52ee9bc360596eac5c2989727->m_frame.f_lineno = 84;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_darker );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_dd5723e52ee9bc360596eac5c2989727->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_dd5723e52ee9bc360596eac5c2989727->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd5723e52ee9bc360596eac5c2989727 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd5723e52ee9bc360596eac5c2989727 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd5723e52ee9bc360596eac5c2989727 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd5723e52ee9bc360596eac5c2989727, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd5723e52ee9bc360596eac5c2989727->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd5723e52ee9bc360596eac5c2989727, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd5723e52ee9bc360596eac5c2989727,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_dd5723e52ee9bc360596eac5c2989727 == cache_frame_dd5723e52ee9bc360596eac5c2989727 )
    {
        Py_DECREF( frame_dd5723e52ee9bc360596eac5c2989727 );
    }
    cache_frame_dd5723e52ee9bc360596eac5c2989727 = NULL;

    assertFrameObject( frame_dd5723e52ee9bc360596eac5c2989727 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_5_darker );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_5_darker );
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


static PyObject *impl_PIL$ImageChops$$$function_6_difference( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_01065398b2219a76715e7d9436a37a7b = NULL;

    struct Nuitka_FrameObject *frame_01065398b2219a76715e7d9436a37a7b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_01065398b2219a76715e7d9436a37a7b, codeobj_01065398b2219a76715e7d9436a37a7b, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_01065398b2219a76715e7d9436a37a7b = cache_frame_01065398b2219a76715e7d9436a37a7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_01065398b2219a76715e7d9436a37a7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_01065398b2219a76715e7d9436a37a7b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_01065398b2219a76715e7d9436a37a7b->m_frame.f_lineno = 100;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_01065398b2219a76715e7d9436a37a7b->m_frame.f_lineno = 101;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_difference );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_01065398b2219a76715e7d9436a37a7b->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_01065398b2219a76715e7d9436a37a7b->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01065398b2219a76715e7d9436a37a7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_01065398b2219a76715e7d9436a37a7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01065398b2219a76715e7d9436a37a7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01065398b2219a76715e7d9436a37a7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01065398b2219a76715e7d9436a37a7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01065398b2219a76715e7d9436a37a7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_01065398b2219a76715e7d9436a37a7b,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_01065398b2219a76715e7d9436a37a7b == cache_frame_01065398b2219a76715e7d9436a37a7b )
    {
        Py_DECREF( frame_01065398b2219a76715e7d9436a37a7b );
    }
    cache_frame_01065398b2219a76715e7d9436a37a7b = NULL;

    assertFrameObject( frame_01065398b2219a76715e7d9436a37a7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_6_difference );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_6_difference );
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


static PyObject *impl_PIL$ImageChops$$$function_7_multiply( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0d4d88fc3405354a16940d1c9a576f77 = NULL;

    struct Nuitka_FrameObject *frame_0d4d88fc3405354a16940d1c9a576f77;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d4d88fc3405354a16940d1c9a576f77, codeobj_0d4d88fc3405354a16940d1c9a576f77, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_0d4d88fc3405354a16940d1c9a576f77 = cache_frame_0d4d88fc3405354a16940d1c9a576f77;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d4d88fc3405354a16940d1c9a576f77 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d4d88fc3405354a16940d1c9a576f77 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0d4d88fc3405354a16940d1c9a576f77->m_frame.f_lineno = 119;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_0d4d88fc3405354a16940d1c9a576f77->m_frame.f_lineno = 120;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_multiply );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_0d4d88fc3405354a16940d1c9a576f77->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_0d4d88fc3405354a16940d1c9a576f77->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d4d88fc3405354a16940d1c9a576f77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d4d88fc3405354a16940d1c9a576f77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d4d88fc3405354a16940d1c9a576f77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d4d88fc3405354a16940d1c9a576f77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d4d88fc3405354a16940d1c9a576f77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d4d88fc3405354a16940d1c9a576f77, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d4d88fc3405354a16940d1c9a576f77,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_0d4d88fc3405354a16940d1c9a576f77 == cache_frame_0d4d88fc3405354a16940d1c9a576f77 )
    {
        Py_DECREF( frame_0d4d88fc3405354a16940d1c9a576f77 );
    }
    cache_frame_0d4d88fc3405354a16940d1c9a576f77 = NULL;

    assertFrameObject( frame_0d4d88fc3405354a16940d1c9a576f77 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_7_multiply );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_7_multiply );
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


static PyObject *impl_PIL$ImageChops$$$function_8_screen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_72551806a12188e4b3c0c077924180f2 = NULL;

    struct Nuitka_FrameObject *frame_72551806a12188e4b3c0c077924180f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72551806a12188e4b3c0c077924180f2, codeobj_72551806a12188e4b3c0c077924180f2, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_72551806a12188e4b3c0c077924180f2 = cache_frame_72551806a12188e4b3c0c077924180f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72551806a12188e4b3c0c077924180f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72551806a12188e4b3c0c077924180f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_72551806a12188e4b3c0c077924180f2->m_frame.f_lineno = 135;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_72551806a12188e4b3c0c077924180f2->m_frame.f_lineno = 136;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_screen );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_72551806a12188e4b3c0c077924180f2->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_72551806a12188e4b3c0c077924180f2->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72551806a12188e4b3c0c077924180f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72551806a12188e4b3c0c077924180f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72551806a12188e4b3c0c077924180f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72551806a12188e4b3c0c077924180f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72551806a12188e4b3c0c077924180f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72551806a12188e4b3c0c077924180f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72551806a12188e4b3c0c077924180f2,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_72551806a12188e4b3c0c077924180f2 == cache_frame_72551806a12188e4b3c0c077924180f2 )
    {
        Py_DECREF( frame_72551806a12188e4b3c0c077924180f2 );
    }
    cache_frame_72551806a12188e4b3c0c077924180f2 = NULL;

    assertFrameObject( frame_72551806a12188e4b3c0c077924180f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_8_screen );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_8_screen );
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


static PyObject *impl_PIL$ImageChops$$$function_9_add( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
    PyObject *par_scale = python_pars[ 2 ];
    PyObject *par_offset = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c64ac73b06df2e48acd5aa941d3b5d66 = NULL;

    struct Nuitka_FrameObject *frame_c64ac73b06df2e48acd5aa941d3b5d66;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c64ac73b06df2e48acd5aa941d3b5d66, codeobj_c64ac73b06df2e48acd5aa941d3b5d66, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c64ac73b06df2e48acd5aa941d3b5d66 = cache_frame_c64ac73b06df2e48acd5aa941d3b5d66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c64ac73b06df2e48acd5aa941d3b5d66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c64ac73b06df2e48acd5aa941d3b5d66 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c64ac73b06df2e48acd5aa941d3b5d66->m_frame.f_lineno = 152;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_c64ac73b06df2e48acd5aa941d3b5d66->m_frame.f_lineno = 153;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_add );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_scale;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_offset;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_c64ac73b06df2e48acd5aa941d3b5d66->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_c64ac73b06df2e48acd5aa941d3b5d66->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c64ac73b06df2e48acd5aa941d3b5d66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c64ac73b06df2e48acd5aa941d3b5d66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c64ac73b06df2e48acd5aa941d3b5d66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c64ac73b06df2e48acd5aa941d3b5d66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c64ac73b06df2e48acd5aa941d3b5d66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c64ac73b06df2e48acd5aa941d3b5d66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c64ac73b06df2e48acd5aa941d3b5d66,
        type_description_1,
        par_image1,
        par_image2,
        par_scale,
        par_offset
    );


    // Release cached frame.
    if ( frame_c64ac73b06df2e48acd5aa941d3b5d66 == cache_frame_c64ac73b06df2e48acd5aa941d3b5d66 )
    {
        Py_DECREF( frame_c64ac73b06df2e48acd5aa941d3b5d66 );
    }
    cache_frame_c64ac73b06df2e48acd5aa941d3b5d66 = NULL;

    assertFrameObject( frame_c64ac73b06df2e48acd5aa941d3b5d66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_9_add );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_scale );
    par_scale = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_scale );
    par_scale = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_9_add );
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


static PyObject *impl_PIL$ImageChops$$$function_10_subtract( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
    PyObject *par_scale = python_pars[ 2 ];
    PyObject *par_offset = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_29ed33f1f5eb9c719af031ebb2a85312 = NULL;

    struct Nuitka_FrameObject *frame_29ed33f1f5eb9c719af031ebb2a85312;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29ed33f1f5eb9c719af031ebb2a85312, codeobj_29ed33f1f5eb9c719af031ebb2a85312, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29ed33f1f5eb9c719af031ebb2a85312 = cache_frame_29ed33f1f5eb9c719af031ebb2a85312;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29ed33f1f5eb9c719af031ebb2a85312 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29ed33f1f5eb9c719af031ebb2a85312 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_29ed33f1f5eb9c719af031ebb2a85312->m_frame.f_lineno = 169;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_29ed33f1f5eb9c719af031ebb2a85312->m_frame.f_lineno = 170;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_subtract );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_scale;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_offset;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_29ed33f1f5eb9c719af031ebb2a85312->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_29ed33f1f5eb9c719af031ebb2a85312->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29ed33f1f5eb9c719af031ebb2a85312 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29ed33f1f5eb9c719af031ebb2a85312 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29ed33f1f5eb9c719af031ebb2a85312 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29ed33f1f5eb9c719af031ebb2a85312, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29ed33f1f5eb9c719af031ebb2a85312->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29ed33f1f5eb9c719af031ebb2a85312, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29ed33f1f5eb9c719af031ebb2a85312,
        type_description_1,
        par_image1,
        par_image2,
        par_scale,
        par_offset
    );


    // Release cached frame.
    if ( frame_29ed33f1f5eb9c719af031ebb2a85312 == cache_frame_29ed33f1f5eb9c719af031ebb2a85312 )
    {
        Py_DECREF( frame_29ed33f1f5eb9c719af031ebb2a85312 );
    }
    cache_frame_29ed33f1f5eb9c719af031ebb2a85312 = NULL;

    assertFrameObject( frame_29ed33f1f5eb9c719af031ebb2a85312 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_10_subtract );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_scale );
    par_scale = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_scale );
    par_scale = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_10_subtract );
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


static PyObject *impl_PIL$ImageChops$$$function_11_add_modulo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_11703e5e7ed781426049fc28dd6f5d77 = NULL;

    struct Nuitka_FrameObject *frame_11703e5e7ed781426049fc28dd6f5d77;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11703e5e7ed781426049fc28dd6f5d77, codeobj_11703e5e7ed781426049fc28dd6f5d77, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_11703e5e7ed781426049fc28dd6f5d77 = cache_frame_11703e5e7ed781426049fc28dd6f5d77;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11703e5e7ed781426049fc28dd6f5d77 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11703e5e7ed781426049fc28dd6f5d77 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_11703e5e7ed781426049fc28dd6f5d77->m_frame.f_lineno = 184;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_11703e5e7ed781426049fc28dd6f5d77->m_frame.f_lineno = 185;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_add_modulo );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_11703e5e7ed781426049fc28dd6f5d77->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_11703e5e7ed781426049fc28dd6f5d77->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11703e5e7ed781426049fc28dd6f5d77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11703e5e7ed781426049fc28dd6f5d77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11703e5e7ed781426049fc28dd6f5d77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11703e5e7ed781426049fc28dd6f5d77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11703e5e7ed781426049fc28dd6f5d77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11703e5e7ed781426049fc28dd6f5d77, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11703e5e7ed781426049fc28dd6f5d77,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_11703e5e7ed781426049fc28dd6f5d77 == cache_frame_11703e5e7ed781426049fc28dd6f5d77 )
    {
        Py_DECREF( frame_11703e5e7ed781426049fc28dd6f5d77 );
    }
    cache_frame_11703e5e7ed781426049fc28dd6f5d77 = NULL;

    assertFrameObject( frame_11703e5e7ed781426049fc28dd6f5d77 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_11_add_modulo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_11_add_modulo );
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


static PyObject *impl_PIL$ImageChops$$$function_12_subtract_modulo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_21cfabae95f347945b2651de52e8be5d = NULL;

    struct Nuitka_FrameObject *frame_21cfabae95f347945b2651de52e8be5d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21cfabae95f347945b2651de52e8be5d, codeobj_21cfabae95f347945b2651de52e8be5d, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_21cfabae95f347945b2651de52e8be5d = cache_frame_21cfabae95f347945b2651de52e8be5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21cfabae95f347945b2651de52e8be5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21cfabae95f347945b2651de52e8be5d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_21cfabae95f347945b2651de52e8be5d->m_frame.f_lineno = 199;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_21cfabae95f347945b2651de52e8be5d->m_frame.f_lineno = 200;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_subtract_modulo );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_21cfabae95f347945b2651de52e8be5d->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_21cfabae95f347945b2651de52e8be5d->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21cfabae95f347945b2651de52e8be5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21cfabae95f347945b2651de52e8be5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21cfabae95f347945b2651de52e8be5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21cfabae95f347945b2651de52e8be5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21cfabae95f347945b2651de52e8be5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21cfabae95f347945b2651de52e8be5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21cfabae95f347945b2651de52e8be5d,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_21cfabae95f347945b2651de52e8be5d == cache_frame_21cfabae95f347945b2651de52e8be5d )
    {
        Py_DECREF( frame_21cfabae95f347945b2651de52e8be5d );
    }
    cache_frame_21cfabae95f347945b2651de52e8be5d = NULL;

    assertFrameObject( frame_21cfabae95f347945b2651de52e8be5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_12_subtract_modulo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_12_subtract_modulo );
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


static PyObject *impl_PIL$ImageChops$$$function_13_logical_and( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f9f4e4c33e8ed2a02c8509354fd6f91e = NULL;

    struct Nuitka_FrameObject *frame_f9f4e4c33e8ed2a02c8509354fd6f91e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9f4e4c33e8ed2a02c8509354fd6f91e, codeobj_f9f4e4c33e8ed2a02c8509354fd6f91e, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_f9f4e4c33e8ed2a02c8509354fd6f91e = cache_frame_f9f4e4c33e8ed2a02c8509354fd6f91e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9f4e4c33e8ed2a02c8509354fd6f91e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f9f4e4c33e8ed2a02c8509354fd6f91e->m_frame.f_lineno = 214;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_f9f4e4c33e8ed2a02c8509354fd6f91e->m_frame.f_lineno = 215;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_and );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f9f4e4c33e8ed2a02c8509354fd6f91e->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f9f4e4c33e8ed2a02c8509354fd6f91e->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9f4e4c33e8ed2a02c8509354fd6f91e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9f4e4c33e8ed2a02c8509354fd6f91e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9f4e4c33e8ed2a02c8509354fd6f91e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9f4e4c33e8ed2a02c8509354fd6f91e,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_f9f4e4c33e8ed2a02c8509354fd6f91e == cache_frame_f9f4e4c33e8ed2a02c8509354fd6f91e )
    {
        Py_DECREF( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );
    }
    cache_frame_f9f4e4c33e8ed2a02c8509354fd6f91e = NULL;

    assertFrameObject( frame_f9f4e4c33e8ed2a02c8509354fd6f91e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_13_logical_and );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_13_logical_and );
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


static PyObject *impl_PIL$ImageChops$$$function_14_logical_or( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8696539e7068a10573a2e73f4cb6cb86 = NULL;

    struct Nuitka_FrameObject *frame_8696539e7068a10573a2e73f4cb6cb86;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8696539e7068a10573a2e73f4cb6cb86, codeobj_8696539e7068a10573a2e73f4cb6cb86, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_8696539e7068a10573a2e73f4cb6cb86 = cache_frame_8696539e7068a10573a2e73f4cb6cb86;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8696539e7068a10573a2e73f4cb6cb86 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8696539e7068a10573a2e73f4cb6cb86 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8696539e7068a10573a2e73f4cb6cb86->m_frame.f_lineno = 229;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_8696539e7068a10573a2e73f4cb6cb86->m_frame.f_lineno = 230;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_or );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_8696539e7068a10573a2e73f4cb6cb86->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_8696539e7068a10573a2e73f4cb6cb86->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8696539e7068a10573a2e73f4cb6cb86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8696539e7068a10573a2e73f4cb6cb86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8696539e7068a10573a2e73f4cb6cb86 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8696539e7068a10573a2e73f4cb6cb86, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8696539e7068a10573a2e73f4cb6cb86->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8696539e7068a10573a2e73f4cb6cb86, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8696539e7068a10573a2e73f4cb6cb86,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_8696539e7068a10573a2e73f4cb6cb86 == cache_frame_8696539e7068a10573a2e73f4cb6cb86 )
    {
        Py_DECREF( frame_8696539e7068a10573a2e73f4cb6cb86 );
    }
    cache_frame_8696539e7068a10573a2e73f4cb6cb86 = NULL;

    assertFrameObject( frame_8696539e7068a10573a2e73f4cb6cb86 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_14_logical_or );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_14_logical_or );
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


static PyObject *impl_PIL$ImageChops$$$function_15_logical_xor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5b698fa60657afb009488295bdf5f523 = NULL;

    struct Nuitka_FrameObject *frame_5b698fa60657afb009488295bdf5f523;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b698fa60657afb009488295bdf5f523, codeobj_5b698fa60657afb009488295bdf5f523, module_PIL$ImageChops, sizeof(void *)+sizeof(void *) );
    frame_5b698fa60657afb009488295bdf5f523 = cache_frame_5b698fa60657afb009488295bdf5f523;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b698fa60657afb009488295bdf5f523 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b698fa60657afb009488295bdf5f523 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_image1;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5b698fa60657afb009488295bdf5f523->m_frame.f_lineno = 244;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = par_image2;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_5b698fa60657afb009488295bdf5f523->m_frame.f_lineno = 245;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image1;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chop_xor );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_image2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_im );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_5b698fa60657afb009488295bdf5f523->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_5b698fa60657afb009488295bdf5f523->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b698fa60657afb009488295bdf5f523 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b698fa60657afb009488295bdf5f523 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b698fa60657afb009488295bdf5f523 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b698fa60657afb009488295bdf5f523, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b698fa60657afb009488295bdf5f523->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b698fa60657afb009488295bdf5f523, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b698fa60657afb009488295bdf5f523,
        type_description_1,
        par_image1,
        par_image2
    );


    // Release cached frame.
    if ( frame_5b698fa60657afb009488295bdf5f523 == cache_frame_5b698fa60657afb009488295bdf5f523 )
    {
        Py_DECREF( frame_5b698fa60657afb009488295bdf5f523 );
    }
    cache_frame_5b698fa60657afb009488295bdf5f523 = NULL;

    assertFrameObject( frame_5b698fa60657afb009488295bdf5f523 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_15_logical_xor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_15_logical_xor );
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


static PyObject *impl_PIL$ImageChops$$$function_16_blend( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
    PyObject *par_alpha = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c634f96d830f3e057e11cb9f12cb56d2 = NULL;

    struct Nuitka_FrameObject *frame_c634f96d830f3e057e11cb9f12cb56d2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c634f96d830f3e057e11cb9f12cb56d2, codeobj_c634f96d830f3e057e11cb9f12cb56d2, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c634f96d830f3e057e11cb9f12cb56d2 = cache_frame_c634f96d830f3e057e11cb9f12cb56d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c634f96d830f3e057e11cb9f12cb56d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c634f96d830f3e057e11cb9f12cb56d2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_blend );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_image1;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_image2;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_alpha;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_c634f96d830f3e057e11cb9f12cb56d2->m_frame.f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c634f96d830f3e057e11cb9f12cb56d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c634f96d830f3e057e11cb9f12cb56d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c634f96d830f3e057e11cb9f12cb56d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c634f96d830f3e057e11cb9f12cb56d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c634f96d830f3e057e11cb9f12cb56d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c634f96d830f3e057e11cb9f12cb56d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c634f96d830f3e057e11cb9f12cb56d2,
        type_description_1,
        par_image1,
        par_image2,
        par_alpha
    );


    // Release cached frame.
    if ( frame_c634f96d830f3e057e11cb9f12cb56d2 == cache_frame_c634f96d830f3e057e11cb9f12cb56d2 )
    {
        Py_DECREF( frame_c634f96d830f3e057e11cb9f12cb56d2 );
    }
    cache_frame_c634f96d830f3e057e11cb9f12cb56d2 = NULL;

    assertFrameObject( frame_c634f96d830f3e057e11cb9f12cb56d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_16_blend );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_alpha );
    par_alpha = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_alpha );
    par_alpha = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_16_blend );
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


static PyObject *impl_PIL$ImageChops$$$function_17_composite( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image1 = python_pars[ 0 ];
    PyObject *par_image2 = python_pars[ 1 ];
    PyObject *par_mask = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_d53e07200ebd39ff042da0f424750492 = NULL;

    struct Nuitka_FrameObject *frame_d53e07200ebd39ff042da0f424750492;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d53e07200ebd39ff042da0f424750492, codeobj_d53e07200ebd39ff042da0f424750492, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d53e07200ebd39ff042da0f424750492 = cache_frame_d53e07200ebd39ff042da0f424750492;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d53e07200ebd39ff042da0f424750492 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d53e07200ebd39ff042da0f424750492 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_composite );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_image1;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_image2;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_mask;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d53e07200ebd39ff042da0f424750492->m_frame.f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d53e07200ebd39ff042da0f424750492 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d53e07200ebd39ff042da0f424750492 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d53e07200ebd39ff042da0f424750492 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d53e07200ebd39ff042da0f424750492, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d53e07200ebd39ff042da0f424750492->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d53e07200ebd39ff042da0f424750492, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d53e07200ebd39ff042da0f424750492,
        type_description_1,
        par_image1,
        par_image2,
        par_mask
    );


    // Release cached frame.
    if ( frame_d53e07200ebd39ff042da0f424750492 == cache_frame_d53e07200ebd39ff042da0f424750492 )
    {
        Py_DECREF( frame_d53e07200ebd39ff042da0f424750492 );
    }
    cache_frame_d53e07200ebd39ff042da0f424750492 = NULL;

    assertFrameObject( frame_d53e07200ebd39ff042da0f424750492 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_17_composite );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_mask );
    par_mask = NULL;

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

    Py_XDECREF( par_image1 );
    par_image1 = NULL;

    Py_XDECREF( par_image2 );
    par_image2 = NULL;

    Py_XDECREF( par_mask );
    par_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_17_composite );
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


static PyObject *impl_PIL$ImageChops$$$function_18_offset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_image = python_pars[ 0 ];
    PyObject *par_xoffset = python_pars[ 1 ];
    PyObject *par_yoffset = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f984751317114d7fd1fc7b6b096e83eb = NULL;

    struct Nuitka_FrameObject *frame_f984751317114d7fd1fc7b6b096e83eb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f984751317114d7fd1fc7b6b096e83eb, codeobj_f984751317114d7fd1fc7b6b096e83eb, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f984751317114d7fd1fc7b6b096e83eb = cache_frame_f984751317114d7fd1fc7b6b096e83eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f984751317114d7fd1fc7b6b096e83eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f984751317114d7fd1fc7b6b096e83eb ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_yoffset;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = par_xoffset;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "xoffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_yoffset;
        par_yoffset = tmp_assign_source_1;
        Py_INCREF( par_yoffset );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_instance_1 = par_image;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_f984751317114d7fd1fc7b6b096e83eb->m_frame.f_lineno = 282;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_image;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_image;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_im );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_offset );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_xoffset;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "xoffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_yoffset;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "yoffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_f984751317114d7fd1fc7b6b096e83eb->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f984751317114d7fd1fc7b6b096e83eb->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f984751317114d7fd1fc7b6b096e83eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f984751317114d7fd1fc7b6b096e83eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f984751317114d7fd1fc7b6b096e83eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f984751317114d7fd1fc7b6b096e83eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f984751317114d7fd1fc7b6b096e83eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f984751317114d7fd1fc7b6b096e83eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f984751317114d7fd1fc7b6b096e83eb,
        type_description_1,
        par_image,
        par_xoffset,
        par_yoffset
    );


    // Release cached frame.
    if ( frame_f984751317114d7fd1fc7b6b096e83eb == cache_frame_f984751317114d7fd1fc7b6b096e83eb )
    {
        Py_DECREF( frame_f984751317114d7fd1fc7b6b096e83eb );
    }
    cache_frame_f984751317114d7fd1fc7b6b096e83eb = NULL;

    assertFrameObject( frame_f984751317114d7fd1fc7b6b096e83eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_18_offset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_image );
    par_image = NULL;

    Py_XDECREF( par_xoffset );
    par_xoffset = NULL;

    Py_XDECREF( par_yoffset );
    par_yoffset = NULL;

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

    Py_XDECREF( par_image );
    par_image = NULL;

    Py_XDECREF( par_xoffset );
    par_xoffset = NULL;

    Py_XDECREF( par_yoffset );
    par_yoffset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageChops$$$function_18_offset );
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



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_10_subtract( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_10_subtract,
        const_str_plain_subtract,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_29ed33f1f5eb9c719af031ebb2a85312,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_4370b1b3b2074d3d00405f9d1d8d178b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_11_add_modulo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_11_add_modulo,
        const_str_plain_add_modulo,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11703e5e7ed781426049fc28dd6f5d77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_7a1209d1854cbcf06696854b4882a7a5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_12_subtract_modulo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_12_subtract_modulo,
        const_str_plain_subtract_modulo,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_21cfabae95f347945b2651de52e8be5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_d30b936479ee3718a769e023931a08cc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_13_logical_and(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_13_logical_and,
        const_str_plain_logical_and,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9f4e4c33e8ed2a02c8509354fd6f91e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_f4e79a5be5e51f17a11d6fddab1e54f6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_14_logical_or(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_14_logical_or,
        const_str_plain_logical_or,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8696539e7068a10573a2e73f4cb6cb86,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_ae9bde4c3dc946b12274a0d1859ca677,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_15_logical_xor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_15_logical_xor,
        const_str_plain_logical_xor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5b698fa60657afb009488295bdf5f523,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_3893df2bd9c1616d14221872463ae4b5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_16_blend(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_16_blend,
        const_str_plain_blend,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c634f96d830f3e057e11cb9f12cb56d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_330931758f0ece41f45b97f63bd1d3cc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_17_composite(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_17_composite,
        const_str_plain_composite,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d53e07200ebd39ff042da0f424750492,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_b42909581e7a9e471d384490ea7d49d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_18_offset( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_18_offset,
        const_str_plain_offset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f984751317114d7fd1fc7b6b096e83eb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_da0dca45318b0e88a977cc534db2c085,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_1_constant,
        const_str_plain_constant,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_508a06384b08905fb54da74fcf7634f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_75d3ca04904dd8d83bb88c84b3351182,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_2_duplicate,
        const_str_plain_duplicate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_243c993ecb447aa7b0125309780a0393,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_3e0519114973f2ac39322526e664803d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_3_invert,
        const_str_plain_invert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_009141ab640bb029b7fe0ddb2702e8ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_80ed5aa5d813a5989d5e2be433f0ecd8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_4_lighter,
        const_str_plain_lighter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ec497da232e98bab1e095a655688109c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_4e6cca9d73a0a308915783f62cb797b4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_5_darker,
        const_str_plain_darker,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd5723e52ee9bc360596eac5c2989727,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_27e372b8bb0991bd3ce7697077379f9a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_6_difference,
        const_str_plain_difference,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_01065398b2219a76715e7d9436a37a7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_a862fd76eeff5a9f507a7e5d2a0312c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_7_multiply,
        const_str_plain_multiply,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0d4d88fc3405354a16940d1c9a576f77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_f4cac0c5e4abca9248a1bd56963b9635,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_8_screen,
        const_str_plain_screen,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72551806a12188e4b3c0c077924180f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_fecfb5f39fe7667c7b8e2cd1407dbe1f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function_9_add( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function_9_add,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c64ac73b06df2e48acd5aa941d3b5d66,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageChops,
        const_str_digest_80ed6d1c7ec0e9e4403bd654814fa1fa,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$ImageChops =
{
    PyModuleDef_HEAD_INIT,
    "PIL.ImageChops",   /* m_name */
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

MOD_INIT_DECL( PIL$ImageChops )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$ImageChops );
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
    puts("PIL.ImageChops: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL.ImageChops: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$ImageChops" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$ImageChops = Py_InitModule4(
        "PIL.ImageChops",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_PIL$ImageChops = PyModule_Create( &mdef_PIL$ImageChops );
#endif

    moduledict_PIL$ImageChops = MODULE_DICT( module_PIL$ImageChops );

    CHECK_OBJECT( module_PIL$ImageChops );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2366abc32a7a698ab8b1f922bf783013, module_PIL$ImageChops );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_94cf4c0cb328f52e80ea8dc6832d32f1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_94cf4c0cb328f52e80ea8dc6832d32f1 = MAKE_MODULE_FRAME( codeobj_94cf4c0cb328f52e80ea8dc6832d32f1, module_PIL$ImageChops );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_94cf4c0cb328f52e80ea8dc6832d32f1 );
    assert( Py_REFCNT( frame_94cf4c0cb328f52e80ea8dc6832d32f1 ) == 2 );

    // Framed code:
    frame_94cf4c0cb328f52e80ea8dc6832d32f1->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_2366abc32a7a698ab8b1f922bf783013;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_94cf4c0cb328f52e80ea8dc6832d32f1->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_PIL;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageChops;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Image_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_94cf4c0cb328f52e80ea8dc6832d32f1->m_frame.f_lineno = 18;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Image );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_Image, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94cf4c0cb328f52e80ea8dc6832d32f1 );
#endif
    popFrameStack();

    assertFrameObject( frame_94cf4c0cb328f52e80ea8dc6832d32f1 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94cf4c0cb328f52e80ea8dc6832d32f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94cf4c0cb328f52e80ea8dc6832d32f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94cf4c0cb328f52e80ea8dc6832d32f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94cf4c0cb328f52e80ea8dc6832d32f1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = MAKE_FUNCTION_PIL$ImageChops$$$function_1_constant(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_constant, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_PIL$ImageChops$$$function_2_duplicate(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_duplicate, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_PIL$ImageChops$$$function_3_invert(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_invert, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_PIL$ImageChops$$$function_4_lighter(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_lighter, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_PIL$ImageChops$$$function_5_darker(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_darker, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_PIL$ImageChops$$$function_6_difference(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_difference, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageChops$$$function_7_multiply(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_multiply, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_PIL$ImageChops$$$function_8_screen(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_screen, tmp_assign_source_15 );
    tmp_defaults_1 = const_tuple_float_1_0_int_0_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_16 = MAKE_FUNCTION_PIL$ImageChops$$$function_9_add( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_add, tmp_assign_source_16 );
    tmp_defaults_2 = const_tuple_float_1_0_int_0_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_17 = MAKE_FUNCTION_PIL$ImageChops$$$function_10_subtract( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_subtract, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_PIL$ImageChops$$$function_11_add_modulo(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_add_modulo, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_PIL$ImageChops$$$function_12_subtract_modulo(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_subtract_modulo, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_PIL$ImageChops$$$function_13_logical_and(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_logical_and, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_PIL$ImageChops$$$function_14_logical_or(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_logical_or, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_PIL$ImageChops$$$function_15_logical_xor(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_logical_xor, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageChops$$$function_16_blend(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_blend, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_PIL$ImageChops$$$function_17_composite(  );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_composite, tmp_assign_source_24 );
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_25 = MAKE_FUNCTION_PIL$ImageChops$$$function_18_offset( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain_offset, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_PIL$ImageChops );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
