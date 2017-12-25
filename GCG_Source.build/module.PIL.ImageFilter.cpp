/* Generated code for Python source for module 'PIL.ImageFilter'
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

/* The _module_PIL$ImageFilter is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageFilter;
PyDictObject *moduledict_PIL$ImageFilter;

/* The module constants used, if any. */
static PyObject *const_str_digest_12d9cad19106401652c949f7d99360ec;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_filterargs;
static PyObject *const_str_plain_FIND_EDGES;
static PyObject *const_str_digest_e749479ca4591258abaf0631a8cdf69c;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_d84b88ab4836b0cc4311549e35293e2e_tuple;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e68099e6f7452c9074c97a4e07393094;
extern PyObject *const_str_plain_offset;
static PyObject *const_str_digest_018790cf874c9e36bf835bed51499c57;
extern PyObject *const_str_plain_scale;
static PyObject *const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_size;
static PyObject *const_str_digest_9d9f2a828ef70b679236a91eca1758e2;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_image;
extern PyObject *const_int_pos_6;
static PyObject *const_str_digest_0e707761fe3eb2ed760845bbcb8d455c;
extern PyObject *const_str_plain_Min;
extern PyObject *const_str_plain_filter;
extern PyObject *const_int_pos_5;
static PyObject *const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple;
static PyObject *const_str_digest_39604897ad47a5d142592f9ba992edf0;
static PyObject *const_str_plain_EMBOSS;
static PyObject *const_str_digest_dfb7408a8a6006f2df58c7f45419b5a8;
static PyObject *const_str_digest_f9ba36e955d752318455b0dcd7d14431;
static PyObject *const_str_digest_ad2377f48771b1c9cb58244227c66ed2;
static PyObject *const_tuple_92b7d27d42c9d6e1edf0bdd1df8db135_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
extern PyObject *const_int_pos_32;
static PyObject *const_str_plain_Emboss;
extern PyObject *const_str_plain_PIL;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple;
static PyObject *const_str_plain_Contour;
static PyObject *const_str_plain_rankfilter;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_dbc0b3880c1030e6241640916a2febe4;
static PyObject *const_str_digest_999cb5fa6af4c133afd03a82f7ef4c93;
extern PyObject *const_int_neg_2;
static PyObject *const_str_digest_cbdb9f50da2bbce87bb4fd75aa16bbda;
static PyObject *const_str_digest_9f4774bec7631f80445f3da1682e2940;
static PyObject *const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple;
static PyObject *const_str_plain_UnsharpMask;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_kernel;
static PyObject *const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple;
static PyObject *const_str_digest_1fa57c13052d9bba47cacba66945dd96;
static PyObject *const_str_plain_ModeFilter;
static PyObject *const_str_plain_unsharp_mask;
static PyObject *const_str_plain_EDGE_ENHANCE;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_BLUR;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_02ef7966359291d22aa51be1f1d0dabf;
static PyObject *const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple;
static PyObject *const_str_plain_DETAIL;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_c3c1dd11c1e933e6a2ea4d04b622099b;
static PyObject *const_str_plain_MedianFilter;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple;
extern PyObject *const_str_plain_P;
static PyObject *const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple;
extern PyObject *const_int_pos_10;
static PyObject *const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple;
static PyObject *const_str_digest_020c75e04126e6782d4f363ba5505678;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_e62e3b3ba046da0530d5673e420b801f;
extern PyObject *const_str_plain_expand;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_plain_percent;
static PyObject *const_str_plain_Blur;
extern PyObject *const_int_pos_150;
static PyObject *const_str_plain_gaussian_blur;
static PyObject *const_str_plain_rank;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_digest_9d1778c0df676849cb5f44cd80d1cd71;
static PyObject *const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple;
static PyObject *const_str_digest_12634c5d92c95b56d789aa738f028b38;
static PyObject *const_str_plain_Rank;
static PyObject *const_str_digest_a7e7d7e0b19f891fd965ca8442de8a5d;
extern PyObject *const_int_0;
static PyObject *const_str_digest_bdf7b7c270cc9aaae166c2692fcee03b;
static PyObject *const_str_plain_SMOOTH_MORE;
static PyObject *const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple;
static PyObject *const_str_digest_73e534cca1bbc0a54069e51041ff1c06;
extern PyObject *const_str_plain_Max;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_plain_RankFilter;
extern PyObject *const_tuple_none_int_0_tuple;
static PyObject *const_str_plain_radius;
extern PyObject *const_str_plain_MultibandFilter;
static PyObject *const_str_plain_MaxFilter;
static PyObject *const_str_plain_Smooth;
static PyObject *const_str_plain_GaussianBlur;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_int_pos_13;
static PyObject *const_str_plain_modefilter;
static PyObject *const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple;
static PyObject *const_str_digest_19bd478da4cd8d542b9dab88bfd5da36;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_threshold;
static PyObject *const_str_digest_ce76fff8dc7cb21df05ce07af6c77202;
static PyObject *const_str_plain_SHARPEN;
static PyObject *const_str_digest_8476291df6a035f15eac6851c1169bd1;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_Sharpen;
static PyObject *const_str_plain_Mode;
static PyObject *const_str_digest_2a5df70489150f55f68057fabbf49e99;
static PyObject *const_tuple_907521f194d0c6f43c103848344947c1_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_SMOOTH;
extern PyObject *const_str_plain_Filter;
static PyObject *const_str_plain_box_blur;
extern PyObject *const_str_plain_reduce;
static PyObject *const_str_digest_2b180389176b4d3a73fee63540fbbd45;
static PyObject *const_str_plain_BoxBlur;
static PyObject *const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple;
static PyObject *const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple;
static PyObject *const_str_plain_EDGE_ENHANCE_MORE;
static PyObject *const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_radius_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_69d247ce8026388825b3f6362c81b3a0;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_int_pos_3_int_pos_3_tuple;
static PyObject *const_str_digest_6dc2472cb495de12cc292361620a630a;
static PyObject *const_str_plain_Median;
static PyObject *const_str_plain_Detail;
static PyObject *const_str_digest_6035838ccdcd1553ac2e986b944be7a7;
static PyObject *const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple;
static PyObject *const_str_plain_CONTOUR;
extern PyObject *const_tuple_str_plain_self_str_plain_size_tuple;
static PyObject *const_str_plain_Kernel;
static PyObject *const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple;
static PyObject *const_str_digest_d298fb076e35d16b6e1326edf579d3dc;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_image_tuple;
static PyObject *const_str_plain_BuiltinFilter;
static PyObject *const_str_plain_MinFilter;
static PyObject *const_str_digest_d6dabd52b1fe8e63e3e930c80e978100;
static PyObject *const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_12d9cad19106401652c949f7d99360ec = UNSTREAM_STRING( &constant_bin[ 61626 ], 11, 0 );
    const_str_plain_filterargs = UNSTREAM_STRING( &constant_bin[ 61637 ], 10, 1 );
    const_str_plain_FIND_EDGES = UNSTREAM_STRING( &constant_bin[ 61647 ], 10, 1 );
    const_str_digest_e749479ca4591258abaf0631a8cdf69c = UNSTREAM_STRING( &constant_bin[ 61657 ], 12, 0 );
    const_tuple_d84b88ab4836b0cc4311549e35293e2e_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 61669 ], 151 );
    const_str_digest_e68099e6f7452c9074c97a4e07393094 = UNSTREAM_STRING( &constant_bin[ 61820 ], 10, 0 );
    const_str_digest_018790cf874c9e36bf835bed51499c57 = UNSTREAM_STRING( &constant_bin[ 61830 ], 28, 0 );
    const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple, 1, const_int_pos_150 ); Py_INCREF( const_int_pos_150 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple, 2, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_str_digest_9d9f2a828ef70b679236a91eca1758e2 = UNSTREAM_STRING( &constant_bin[ 61858 ], 18, 0 );
    const_str_digest_0e707761fe3eb2ed760845bbcb8d455c = UNSTREAM_STRING( &constant_bin[ 61876 ], 22, 0 );
    const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple, 2, const_int_pos_128 ); Py_INCREF( const_int_pos_128 );
    const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 4, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 5, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 6, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 7, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple, 8, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple, 3, const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple ); Py_INCREF( const_tuple_734f2383ae1ed11934f1f2f9dc4c2af1_tuple );
    const_str_digest_39604897ad47a5d142592f9ba992edf0 = UNSTREAM_STRING( &constant_bin[ 61898 ], 518, 0 );
    const_str_plain_EMBOSS = UNSTREAM_STRING( &constant_bin[ 62416 ], 6, 1 );
    const_str_digest_dfb7408a8a6006f2df58c7f45419b5a8 = UNSTREAM_STRING( &constant_bin[ 62422 ], 19, 0 );
    const_str_digest_f9ba36e955d752318455b0dcd7d14431 = UNSTREAM_STRING( &constant_bin[ 62441 ], 20, 0 );
    const_str_digest_ad2377f48771b1c9cb58244227c66ed2 = UNSTREAM_STRING( &constant_bin[ 62461 ], 17, 0 );
    const_tuple_92b7d27d42c9d6e1edf0bdd1df8db135_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 62478 ], 151 );
    const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2 = UNSTREAM_STRING( &constant_bin[ 32210 ], 15, 0 );
    const_str_plain_Emboss = UNSTREAM_STRING( &constant_bin[ 62629 ], 6, 1 );
    const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_907521f194d0c6f43c103848344947c1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 4, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 5, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 6, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 7, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_907521f194d0c6f43c103848344947c1_tuple, 8, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple, 3, const_tuple_907521f194d0c6f43c103848344947c1_tuple ); Py_INCREF( const_tuple_907521f194d0c6f43c103848344947c1_tuple );
    const_str_plain_Contour = UNSTREAM_STRING( &constant_bin[ 62635 ], 7, 1 );
    const_str_plain_rankfilter = UNSTREAM_STRING( &constant_bin[ 62642 ], 10, 1 );
    const_str_digest_dbc0b3880c1030e6241640916a2febe4 = UNSTREAM_STRING( &constant_bin[ 62652 ], 59, 0 );
    const_str_digest_999cb5fa6af4c133afd03a82f7ef4c93 = UNSTREAM_STRING( &constant_bin[ 62711 ], 33, 0 );
    const_str_digest_cbdb9f50da2bbce87bb4fd75aa16bbda = UNSTREAM_STRING( &constant_bin[ 62744 ], 290, 0 );
    const_str_digest_9f4774bec7631f80445f3da1682e2940 = UNSTREAM_STRING( &constant_bin[ 63034 ], 13, 0 );
    const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 4, const_int_pos_9 ); Py_INCREF( const_int_pos_9 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 5, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 6, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 7, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple, 8, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple, 3, const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple ); Py_INCREF( const_tuple_283977cf9c35b87524fbcf487df2cb3c_tuple );
    const_str_plain_UnsharpMask = UNSTREAM_STRING( &constant_bin[ 62441 ], 11, 1 );
    const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 0, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 1, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 2, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 3, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 4, const_int_pos_32 ); Py_INCREF( const_int_pos_32 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 5, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 6, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 7, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    PyTuple_SET_ITEM( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple, 8, const_int_neg_2 ); Py_INCREF( const_int_neg_2 );
    const_str_digest_1fa57c13052d9bba47cacba66945dd96 = UNSTREAM_STRING( &constant_bin[ 63047 ], 18, 0 );
    const_str_plain_ModeFilter = UNSTREAM_STRING( &constant_bin[ 62422 ], 10, 1 );
    const_str_plain_unsharp_mask = UNSTREAM_STRING( &constant_bin[ 63065 ], 12, 1 );
    const_str_plain_EDGE_ENHANCE = UNSTREAM_STRING( &constant_bin[ 63077 ], 12, 1 );
    const_str_plain_BLUR = UNSTREAM_STRING( &constant_bin[ 63089 ], 4, 1 );
    const_str_digest_02ef7966359291d22aa51be1f1d0dabf = UNSTREAM_STRING( &constant_bin[ 63093 ], 18, 0 );
    const_str_plain_DETAIL = UNSTREAM_STRING( &constant_bin[ 63111 ], 6, 1 );
    const_str_digest_c3c1dd11c1e933e6a2ea4d04b622099b = UNSTREAM_STRING( &constant_bin[ 63117 ], 367, 0 );
    const_str_plain_MedianFilter = UNSTREAM_STRING( &constant_bin[ 63484 ], 12, 1 );
    const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_str_plain_rank = UNSTREAM_STRING( &constant_bin[ 62642 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple, 2, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_radius = UNSTREAM_STRING( &constant_bin[ 62001 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple, 1, const_str_plain_radius ); Py_INCREF( const_str_plain_radius );
    const_str_plain_percent = UNSTREAM_STRING( &constant_bin[ 63496 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple, 2, const_str_plain_percent ); Py_INCREF( const_str_plain_percent );
    const_str_plain_threshold = UNSTREAM_STRING( &constant_bin[ 45258 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple, 3, const_str_plain_threshold ); Py_INCREF( const_str_plain_threshold );
    const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 2, const_str_plain_kernel ); Py_INCREF( const_str_plain_kernel );
    PyTuple_SET_ITEM( const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 3, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 4, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    const_str_digest_020c75e04126e6782d4f363ba5505678 = UNSTREAM_STRING( &constant_bin[ 63503 ], 33, 0 );
    const_str_digest_e62e3b3ba046da0530d5673e420b801f = UNSTREAM_STRING( &constant_bin[ 63536 ], 145, 0 );
    const_str_plain_Blur = UNSTREAM_STRING( &constant_bin[ 61898 ], 4, 1 );
    const_str_plain_gaussian_blur = UNSTREAM_STRING( &constant_bin[ 63681 ], 13, 1 );
    const_str_digest_9d1778c0df676849cb5f44cd80d1cd71 = UNSTREAM_STRING( &constant_bin[ 63694 ], 18, 0 );
    const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 4, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 5, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 6, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 7, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple, 8, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple, 3, const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple ); Py_INCREF( const_tuple_6baa453d6fd9ec8f3b4aa9c6e32f5e52_tuple );
    const_str_digest_12634c5d92c95b56d789aa738f028b38 = UNSTREAM_STRING( &constant_bin[ 63712 ], 24, 0 );
    const_str_plain_Rank = UNSTREAM_STRING( &constant_bin[ 63736 ], 4, 1 );
    const_str_digest_a7e7d7e0b19f891fd965ca8442de8a5d = UNSTREAM_STRING( &constant_bin[ 63740 ], 21, 0 );
    const_str_digest_bdf7b7c270cc9aaae166c2692fcee03b = UNSTREAM_STRING( &constant_bin[ 63761 ], 17, 0 );
    const_str_plain_SMOOTH_MORE = UNSTREAM_STRING( &constant_bin[ 63778 ], 11, 1 );
    const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 4, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 5, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 6, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 7, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple, 8, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_digest_73e534cca1bbc0a54069e51041ff1c06 = UNSTREAM_STRING( &constant_bin[ 63789 ], 14, 0 );
    const_str_plain_RankFilter = UNSTREAM_STRING( &constant_bin[ 63803 ], 10, 1 );
    const_str_plain_MaxFilter = UNSTREAM_STRING( &constant_bin[ 63093 ], 9, 1 );
    const_str_plain_Smooth = UNSTREAM_STRING( &constant_bin[ 61626 ], 6, 1 );
    const_str_plain_GaussianBlur = UNSTREAM_STRING( &constant_bin[ 63813 ], 12, 1 );
    const_str_plain_modefilter = UNSTREAM_STRING( &constant_bin[ 63825 ], 10, 1 );
    const_str_digest_19bd478da4cd8d542b9dab88bfd5da36 = UNSTREAM_STRING( &constant_bin[ 63835 ], 143, 0 );
    const_str_digest_ce76fff8dc7cb21df05ce07af6c77202 = UNSTREAM_STRING( &constant_bin[ 63978 ], 17, 0 );
    const_str_plain_SHARPEN = UNSTREAM_STRING( &constant_bin[ 63995 ], 7, 1 );
    const_str_digest_8476291df6a035f15eac6851c1169bd1 = UNSTREAM_STRING( &constant_bin[ 64002 ], 718, 0 );
    const_str_plain_Sharpen = UNSTREAM_STRING( &constant_bin[ 64720 ], 7, 1 );
    const_str_plain_Mode = UNSTREAM_STRING( &constant_bin[ 28749 ], 4, 1 );
    const_str_digest_2a5df70489150f55f68057fabbf49e99 = UNSTREAM_STRING( &constant_bin[ 64727 ], 19, 0 );
    const_str_plain_SMOOTH = UNSTREAM_STRING( &constant_bin[ 63778 ], 6, 1 );
    const_str_plain_box_blur = UNSTREAM_STRING( &constant_bin[ 64746 ], 8, 1 );
    const_str_digest_2b180389176b4d3a73fee63540fbbd45 = UNSTREAM_STRING( &constant_bin[ 64754 ], 21, 0 );
    const_str_plain_BoxBlur = UNSTREAM_STRING( &constant_bin[ 63789 ], 7, 1 );
    const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple, 1, const_int_pos_13 ); Py_INCREF( const_int_pos_13 );
    PyTuple_SET_ITEM( const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 3, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 4, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 5, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 6, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 7, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple, 8, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple, 3, const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple ); Py_INCREF( const_tuple_c306392bfa993d92f2686e27e6b3e5a6_tuple );
    const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple, 1, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyTuple_SET_ITEM( const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple, 3, const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple ); Py_INCREF( const_tuple_170b256e4bfb96db36e4f39651074bf0_tuple );
    const_str_plain_EDGE_ENHANCE_MORE = UNSTREAM_STRING( &constant_bin[ 64775 ], 17, 1 );
    const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple, 3, const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple ); Py_INCREF( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple );
    const_tuple_str_plain_self_str_plain_radius_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_radius_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_radius_tuple, 1, const_str_plain_radius ); Py_INCREF( const_str_plain_radius );
    const_str_digest_69d247ce8026388825b3f6362c81b3a0 = UNSTREAM_STRING( &constant_bin[ 64792 ], 144, 0 );
    const_str_digest_6dc2472cb495de12cc292361620a630a = UNSTREAM_STRING( &constant_bin[ 64936 ], 19, 0 );
    const_str_plain_Median = UNSTREAM_STRING( &constant_bin[ 63484 ], 6, 1 );
    const_str_plain_Detail = UNSTREAM_STRING( &constant_bin[ 64955 ], 6, 1 );
    const_str_digest_6035838ccdcd1553ac2e986b944be7a7 = UNSTREAM_STRING( &constant_bin[ 64961 ], 410, 0 );
    const_str_plain_CONTOUR = UNSTREAM_STRING( &constant_bin[ 65371 ], 7, 1 );
    const_str_plain_Kernel = UNSTREAM_STRING( &constant_bin[ 63034 ], 6, 1 );
    const_str_digest_d298fb076e35d16b6e1326edf579d3dc = UNSTREAM_STRING( &constant_bin[ 65378 ], 16, 0 );
    const_str_plain_BuiltinFilter = UNSTREAM_STRING( &constant_bin[ 61876 ], 13, 1 );
    const_str_plain_MinFilter = UNSTREAM_STRING( &constant_bin[ 61858 ], 9, 1 );
    const_str_digest_d6dabd52b1fe8e63e3e930c80e978100 = UNSTREAM_STRING( &constant_bin[ 63503 ], 15, 0 );
    const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple, 0, const_tuple_int_pos_3_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_int_pos_3_tuple );
    PyTuple_SET_ITEM( const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple, 2, const_int_pos_255 ); Py_INCREF( const_int_pos_255 );
    PyTuple_SET_ITEM( const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple, 3, const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple ); Py_INCREF( const_tuple_b1f79f8a06e322c0c36657b8df87299b_tuple );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PIL$ImageFilter( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bc368001b911bfd57ea4224b020e3022;
static PyCodeObject *codeobj_d67d95c185380705e95193c1ecbd55a5;
static PyCodeObject *codeobj_46c9a181a71e0f23296b8e34cce99ef1;
static PyCodeObject *codeobj_2977a26c17b9cb95ce18a1475ff1137f;
static PyCodeObject *codeobj_2d01aca9d574ca50d64172c1b7e01738;
static PyCodeObject *codeobj_4570c993ba6bf09607958954a8ea7a80;
static PyCodeObject *codeobj_2ba306a652fa3647a125b33508ff031b;
static PyCodeObject *codeobj_7b827e494a585f16c06f222d33c4245d;
static PyCodeObject *codeobj_aab7e6a813bc564f8c6c91779f2dc084;
static PyCodeObject *codeobj_93cf4daaff3131ef2813e071b0a9f830;
static PyCodeObject *codeobj_202801bc728400c8fea8d4f6eea7df60;
static PyCodeObject *codeobj_5eb23fb0e8f0b499206b84103666caa2;
static PyCodeObject *codeobj_f843f902aa9e28a649f95431a0ba1464;
static PyCodeObject *codeobj_3bcc8d0fbabffe372861f5c31f4578ff;
static PyCodeObject *codeobj_25170ad76dac0933ed7503708929d062;
static PyCodeObject *codeobj_7b2a542fb455a85c61bb4c7ff3058593;
static PyCodeObject *codeobj_6604ee20a0dc45690e744887e5d0cba5;
static PyCodeObject *codeobj_5a9c6d0f5c032b5597f14f80a895667e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1fa57c13052d9bba47cacba66945dd96 );
    codeobj_bc368001b911bfd57ea4224b020e3022 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 50, const_tuple_str_plain_a_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d67d95c185380705e95193c1ecbd55a5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_12634c5d92c95b56d789aa738f028b38, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_46c9a181a71e0f23296b8e34cce99ef1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 47, const_tuple_7256c42419e1b3925b1074fcf78cc285_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2977a26c17b9cb95ce18a1475ff1137f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 62, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
    codeobj_2d01aca9d574ca50d64172c1b7e01738 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 78, const_tuple_str_plain_self_str_plain_size_str_plain_rank_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4570c993ba6bf09607958954a8ea7a80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 98, const_tuple_str_plain_self_str_plain_size_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ba306a652fa3647a125b33508ff031b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 112, const_tuple_str_plain_self_str_plain_size_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b827e494a585f16c06f222d33c4245d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 126, const_tuple_str_plain_self_str_plain_size_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aab7e6a813bc564f8c6c91779f2dc084 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 142, const_tuple_str_plain_self_str_plain_size_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93cf4daaff3131ef2813e071b0a9f830 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 156, const_tuple_str_plain_self_str_plain_radius_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_202801bc728400c8fea8d4f6eea7df60 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 176, const_tuple_str_plain_self_str_plain_radius_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5eb23fb0e8f0b499206b84103666caa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 199, const_tuple_87f50509eeb6fae4db9702d57a4f39e2_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f843f902aa9e28a649f95431a0ba1464 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 55, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3bcc8d0fbabffe372861f5c31f4578ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 82, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25170ad76dac0933ed7503708929d062 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 145, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b2a542fb455a85c61bb4c7ff3058593 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 159, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6604ee20a0dc45690e744887e5d0cba5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 179, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a9c6d0f5c032b5597f14f80a895667e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter, 204, const_tuple_str_plain_self_str_plain_image_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_10_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_11___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_12_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_13___init__(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_14_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_15___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_16_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_2_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_5_filter(  );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_7___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_8___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_9___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_PIL$ImageFilter$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *par_kernel = python_pars[ 2 ];
    PyObject *par_scale = python_pars[ 3 ];
    PyObject *par_offset = python_pars[ 4 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_46c9a181a71e0f23296b8e34cce99ef1 = NULL;

    struct Nuitka_FrameObject *frame_46c9a181a71e0f23296b8e34cce99ef1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46c9a181a71e0f23296b8e34cce99ef1, codeobj_46c9a181a71e0f23296b8e34cce99ef1, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46c9a181a71e0f23296b8e34cce99ef1 = cache_frame_46c9a181a71e0f23296b8e34cce99ef1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46c9a181a71e0f23296b8e34cce99ef1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46c9a181a71e0f23296b8e34cce99ef1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_scale;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_functools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reduce );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__$$$function_1_lambda(  );
    tmp_args_element_name_2 = par_kernel;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kernel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_46c9a181a71e0f23296b8e34cce99ef1->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_scale;
        par_scale = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_subscribed_name_1 = par_size;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_size;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = par_kernel;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kernel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 51;
        type_description_1 = "ooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_999cb5fa6af4c133afd03a82f7ef4c93;
    frame_46c9a181a71e0f23296b8e34cce99ef1->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 52;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = par_size;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_scale;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_offset;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_kernel;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kernel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 3, tmp_tuple_element_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_filterargs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 53;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46c9a181a71e0f23296b8e34cce99ef1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46c9a181a71e0f23296b8e34cce99ef1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46c9a181a71e0f23296b8e34cce99ef1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46c9a181a71e0f23296b8e34cce99ef1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46c9a181a71e0f23296b8e34cce99ef1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46c9a181a71e0f23296b8e34cce99ef1,
        type_description_1,
        par_self,
        par_size,
        par_kernel,
        par_scale,
        par_offset
    );


    // Release cached frame.
    if ( frame_46c9a181a71e0f23296b8e34cce99ef1 == cache_frame_46c9a181a71e0f23296b8e34cce99ef1 )
    {
        Py_DECREF( frame_46c9a181a71e0f23296b8e34cce99ef1 );
    }
    cache_frame_46c9a181a71e0f23296b8e34cce99ef1 = NULL;

    assertFrameObject( frame_46c9a181a71e0f23296b8e34cce99ef1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_kernel );
    par_kernel = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_kernel );
    par_kernel = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_1___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_1___init__$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_bc368001b911bfd57ea4224b020e3022 = NULL;

    struct Nuitka_FrameObject *frame_bc368001b911bfd57ea4224b020e3022;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc368001b911bfd57ea4224b020e3022, codeobj_bc368001b911bfd57ea4224b020e3022, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_bc368001b911bfd57ea4224b020e3022 = cache_frame_bc368001b911bfd57ea4224b020e3022;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc368001b911bfd57ea4224b020e3022 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc368001b911bfd57ea4224b020e3022 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = par_a;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = par_b;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc368001b911bfd57ea4224b020e3022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc368001b911bfd57ea4224b020e3022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc368001b911bfd57ea4224b020e3022 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc368001b911bfd57ea4224b020e3022, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc368001b911bfd57ea4224b020e3022->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc368001b911bfd57ea4224b020e3022, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc368001b911bfd57ea4224b020e3022,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame.
    if ( frame_bc368001b911bfd57ea4224b020e3022 == cache_frame_bc368001b911bfd57ea4224b020e3022 )
    {
        Py_DECREF( frame_bc368001b911bfd57ea4224b020e3022 );
    }
    cache_frame_bc368001b911bfd57ea4224b020e3022 = NULL;

    assertFrameObject( frame_bc368001b911bfd57ea4224b020e3022 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_1___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_1___init__$$$function_1_lambda );
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


static PyObject *impl_PIL$ImageFilter$$$function_2_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_f843f902aa9e28a649f95431a0ba1464 = NULL;

    struct Nuitka_FrameObject *frame_f843f902aa9e28a649f95431a0ba1464;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f843f902aa9e28a649f95431a0ba1464, codeobj_f843f902aa9e28a649f95431a0ba1464, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_f843f902aa9e28a649f95431a0ba1464 = cache_frame_f843f902aa9e28a649f95431a0ba1464;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f843f902aa9e28a649f95431a0ba1464 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f843f902aa9e28a649f95431a0ba1464 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_P;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 56;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_018790cf874c9e36bf835bed51499c57;
    frame_f843f902aa9e28a649f95431a0ba1464->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 57;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_image;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_filter );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_filterargs );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f843f902aa9e28a649f95431a0ba1464 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f843f902aa9e28a649f95431a0ba1464 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f843f902aa9e28a649f95431a0ba1464 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f843f902aa9e28a649f95431a0ba1464, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f843f902aa9e28a649f95431a0ba1464->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f843f902aa9e28a649f95431a0ba1464, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f843f902aa9e28a649f95431a0ba1464,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_f843f902aa9e28a649f95431a0ba1464 == cache_frame_f843f902aa9e28a649f95431a0ba1464 )
    {
        Py_DECREF( frame_f843f902aa9e28a649f95431a0ba1464 );
    }
    cache_frame_f843f902aa9e28a649f95431a0ba1464 = NULL;

    assertFrameObject( frame_f843f902aa9e28a649f95431a0ba1464 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_2_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_2_filter );
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


static PyObject *impl_PIL$ImageFilter$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_3___init__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_PIL$ImageFilter$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *par_rank = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2d01aca9d574ca50d64172c1b7e01738 = NULL;

    struct Nuitka_FrameObject *frame_2d01aca9d574ca50d64172c1b7e01738;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d01aca9d574ca50d64172c1b7e01738, codeobj_2d01aca9d574ca50d64172c1b7e01738, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d01aca9d574ca50d64172c1b7e01738 = cache_frame_2d01aca9d574ca50d64172c1b7e01738;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d01aca9d574ca50d64172c1b7e01738 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d01aca9d574ca50d64172c1b7e01738 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_size;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_rank;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rank" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rank, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d01aca9d574ca50d64172c1b7e01738 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d01aca9d574ca50d64172c1b7e01738 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d01aca9d574ca50d64172c1b7e01738, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d01aca9d574ca50d64172c1b7e01738->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d01aca9d574ca50d64172c1b7e01738, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d01aca9d574ca50d64172c1b7e01738,
        type_description_1,
        par_self,
        par_size,
        par_rank
    );


    // Release cached frame.
    if ( frame_2d01aca9d574ca50d64172c1b7e01738 == cache_frame_2d01aca9d574ca50d64172c1b7e01738 )
    {
        Py_DECREF( frame_2d01aca9d574ca50d64172c1b7e01738 );
    }
    cache_frame_2d01aca9d574ca50d64172c1b7e01738 = NULL;

    assertFrameObject( frame_2d01aca9d574ca50d64172c1b7e01738 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_rank );
    par_rank = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_rank );
    par_rank = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_4___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_5_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static struct Nuitka_FrameObject *cache_frame_3bcc8d0fbabffe372861f5c31f4578ff = NULL;

    struct Nuitka_FrameObject *frame_3bcc8d0fbabffe372861f5c31f4578ff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bcc8d0fbabffe372861f5c31f4578ff, codeobj_3bcc8d0fbabffe372861f5c31f4578ff, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_3bcc8d0fbabffe372861f5c31f4578ff = cache_frame_3bcc8d0fbabffe372861f5c31f4578ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bcc8d0fbabffe372861f5c31f4578ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bcc8d0fbabffe372861f5c31f4578ff ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mode );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_P;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 83;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_018790cf874c9e36bf835bed51499c57;
    frame_3bcc8d0fbabffe372861f5c31f4578ff->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 84;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_image;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "image" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_expand );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_2;
    tmp_args_element_name_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_args_element_name_2 = BINARY_OPERATION_FLOORDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3bcc8d0fbabffe372861f5c31f4578ff->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_image;
        par_image = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_5 = par_image;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rankfilter );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_rank );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3bcc8d0fbabffe372861f5c31f4578ff->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bcc8d0fbabffe372861f5c31f4578ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bcc8d0fbabffe372861f5c31f4578ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bcc8d0fbabffe372861f5c31f4578ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bcc8d0fbabffe372861f5c31f4578ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bcc8d0fbabffe372861f5c31f4578ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bcc8d0fbabffe372861f5c31f4578ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bcc8d0fbabffe372861f5c31f4578ff,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_3bcc8d0fbabffe372861f5c31f4578ff == cache_frame_3bcc8d0fbabffe372861f5c31f4578ff )
    {
        Py_DECREF( frame_3bcc8d0fbabffe372861f5c31f4578ff );
    }
    cache_frame_3bcc8d0fbabffe372861f5c31f4578ff = NULL;

    assertFrameObject( frame_3bcc8d0fbabffe372861f5c31f4578ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_5_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_5_filter );
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


static PyObject *impl_PIL$ImageFilter$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    static struct Nuitka_FrameObject *cache_frame_4570c993ba6bf09607958954a8ea7a80 = NULL;

    struct Nuitka_FrameObject *frame_4570c993ba6bf09607958954a8ea7a80;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4570c993ba6bf09607958954a8ea7a80, codeobj_4570c993ba6bf09607958954a8ea7a80, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_4570c993ba6bf09607958954a8ea7a80 = cache_frame_4570c993ba6bf09607958954a8ea7a80;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4570c993ba6bf09607958954a8ea7a80 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4570c993ba6bf09607958954a8ea7a80 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_size;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = par_size;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_size;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_assattr_name_2 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rank, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4570c993ba6bf09607958954a8ea7a80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4570c993ba6bf09607958954a8ea7a80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4570c993ba6bf09607958954a8ea7a80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4570c993ba6bf09607958954a8ea7a80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4570c993ba6bf09607958954a8ea7a80, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4570c993ba6bf09607958954a8ea7a80,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_4570c993ba6bf09607958954a8ea7a80 == cache_frame_4570c993ba6bf09607958954a8ea7a80 )
    {
        Py_DECREF( frame_4570c993ba6bf09607958954a8ea7a80 );
    }
    cache_frame_4570c993ba6bf09607958954a8ea7a80 = NULL;

    assertFrameObject( frame_4570c993ba6bf09607958954a8ea7a80 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_6___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2ba306a652fa3647a125b33508ff031b = NULL;

    struct Nuitka_FrameObject *frame_2ba306a652fa3647a125b33508ff031b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ba306a652fa3647a125b33508ff031b, codeobj_2ba306a652fa3647a125b33508ff031b, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_2ba306a652fa3647a125b33508ff031b = cache_frame_2ba306a652fa3647a125b33508ff031b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ba306a652fa3647a125b33508ff031b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ba306a652fa3647a125b33508ff031b ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_size;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rank, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ba306a652fa3647a125b33508ff031b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ba306a652fa3647a125b33508ff031b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ba306a652fa3647a125b33508ff031b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ba306a652fa3647a125b33508ff031b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ba306a652fa3647a125b33508ff031b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ba306a652fa3647a125b33508ff031b,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_2ba306a652fa3647a125b33508ff031b == cache_frame_2ba306a652fa3647a125b33508ff031b )
    {
        Py_DECREF( frame_2ba306a652fa3647a125b33508ff031b );
    }
    cache_frame_2ba306a652fa3647a125b33508ff031b = NULL;

    assertFrameObject( frame_2ba306a652fa3647a125b33508ff031b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_7___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    static struct Nuitka_FrameObject *cache_frame_7b827e494a585f16c06f222d33c4245d = NULL;

    struct Nuitka_FrameObject *frame_7b827e494a585f16c06f222d33c4245d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b827e494a585f16c06f222d33c4245d, codeobj_7b827e494a585f16c06f222d33c4245d, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_7b827e494a585f16c06f222d33c4245d = cache_frame_7b827e494a585f16c06f222d33c4245d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b827e494a585f16c06f222d33c4245d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b827e494a585f16c06f222d33c4245d ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_size;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = par_size;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_size;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assattr_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rank, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 128;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b827e494a585f16c06f222d33c4245d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b827e494a585f16c06f222d33c4245d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b827e494a585f16c06f222d33c4245d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b827e494a585f16c06f222d33c4245d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b827e494a585f16c06f222d33c4245d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b827e494a585f16c06f222d33c4245d,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_7b827e494a585f16c06f222d33c4245d == cache_frame_7b827e494a585f16c06f222d33c4245d )
    {
        Py_DECREF( frame_7b827e494a585f16c06f222d33c4245d );
    }
    cache_frame_7b827e494a585f16c06f222d33c4245d = NULL;

    assertFrameObject( frame_7b827e494a585f16c06f222d33c4245d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_8___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_aab7e6a813bc564f8c6c91779f2dc084 = NULL;

    struct Nuitka_FrameObject *frame_aab7e6a813bc564f8c6c91779f2dc084;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aab7e6a813bc564f8c6c91779f2dc084, codeobj_aab7e6a813bc564f8c6c91779f2dc084, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_aab7e6a813bc564f8c6c91779f2dc084 = cache_frame_aab7e6a813bc564f8c6c91779f2dc084;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aab7e6a813bc564f8c6c91779f2dc084 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aab7e6a813bc564f8c6c91779f2dc084 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_size;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_size, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab7e6a813bc564f8c6c91779f2dc084 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab7e6a813bc564f8c6c91779f2dc084 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aab7e6a813bc564f8c6c91779f2dc084, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aab7e6a813bc564f8c6c91779f2dc084->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aab7e6a813bc564f8c6c91779f2dc084, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aab7e6a813bc564f8c6c91779f2dc084,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_aab7e6a813bc564f8c6c91779f2dc084 == cache_frame_aab7e6a813bc564f8c6c91779f2dc084 )
    {
        Py_DECREF( frame_aab7e6a813bc564f8c6c91779f2dc084 );
    }
    cache_frame_aab7e6a813bc564f8c6c91779f2dc084 = NULL;

    assertFrameObject( frame_aab7e6a813bc564f8c6c91779f2dc084 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_9___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_9___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_10_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_25170ad76dac0933ed7503708929d062 = NULL;

    struct Nuitka_FrameObject *frame_25170ad76dac0933ed7503708929d062;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25170ad76dac0933ed7503708929d062, codeobj_25170ad76dac0933ed7503708929d062, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_25170ad76dac0933ed7503708929d062 = cache_frame_25170ad76dac0933ed7503708929d062;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25170ad76dac0933ed7503708929d062 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25170ad76dac0933ed7503708929d062 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_modefilter );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_25170ad76dac0933ed7503708929d062->m_frame.f_lineno = 146;
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


        exception_lineno = 146;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25170ad76dac0933ed7503708929d062 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25170ad76dac0933ed7503708929d062 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25170ad76dac0933ed7503708929d062 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25170ad76dac0933ed7503708929d062, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25170ad76dac0933ed7503708929d062->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25170ad76dac0933ed7503708929d062, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25170ad76dac0933ed7503708929d062,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_25170ad76dac0933ed7503708929d062 == cache_frame_25170ad76dac0933ed7503708929d062 )
    {
        Py_DECREF( frame_25170ad76dac0933ed7503708929d062 );
    }
    cache_frame_25170ad76dac0933ed7503708929d062 = NULL;

    assertFrameObject( frame_25170ad76dac0933ed7503708929d062 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_10_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_10_filter );
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


static PyObject *impl_PIL$ImageFilter$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_radius = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_93cf4daaff3131ef2813e071b0a9f830 = NULL;

    struct Nuitka_FrameObject *frame_93cf4daaff3131ef2813e071b0a9f830;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93cf4daaff3131ef2813e071b0a9f830, codeobj_93cf4daaff3131ef2813e071b0a9f830, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_93cf4daaff3131ef2813e071b0a9f830 = cache_frame_93cf4daaff3131ef2813e071b0a9f830;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93cf4daaff3131ef2813e071b0a9f830 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93cf4daaff3131ef2813e071b0a9f830 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_radius;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_radius, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93cf4daaff3131ef2813e071b0a9f830 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93cf4daaff3131ef2813e071b0a9f830 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93cf4daaff3131ef2813e071b0a9f830, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93cf4daaff3131ef2813e071b0a9f830->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93cf4daaff3131ef2813e071b0a9f830, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93cf4daaff3131ef2813e071b0a9f830,
        type_description_1,
        par_self,
        par_radius
    );


    // Release cached frame.
    if ( frame_93cf4daaff3131ef2813e071b0a9f830 == cache_frame_93cf4daaff3131ef2813e071b0a9f830 )
    {
        Py_DECREF( frame_93cf4daaff3131ef2813e071b0a9f830 );
    }
    cache_frame_93cf4daaff3131ef2813e071b0a9f830 = NULL;

    assertFrameObject( frame_93cf4daaff3131ef2813e071b0a9f830 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_11___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_12_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_7b2a542fb455a85c61bb4c7ff3058593 = NULL;

    struct Nuitka_FrameObject *frame_7b2a542fb455a85c61bb4c7ff3058593;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b2a542fb455a85c61bb4c7ff3058593, codeobj_7b2a542fb455a85c61bb4c7ff3058593, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_7b2a542fb455a85c61bb4c7ff3058593 = cache_frame_7b2a542fb455a85c61bb4c7ff3058593;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b2a542fb455a85c61bb4c7ff3058593 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b2a542fb455a85c61bb4c7ff3058593 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_gaussian_blur );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_radius );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_7b2a542fb455a85c61bb4c7ff3058593->m_frame.f_lineno = 160;
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


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b2a542fb455a85c61bb4c7ff3058593 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b2a542fb455a85c61bb4c7ff3058593 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b2a542fb455a85c61bb4c7ff3058593 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b2a542fb455a85c61bb4c7ff3058593, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b2a542fb455a85c61bb4c7ff3058593->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b2a542fb455a85c61bb4c7ff3058593, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b2a542fb455a85c61bb4c7ff3058593,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_7b2a542fb455a85c61bb4c7ff3058593 == cache_frame_7b2a542fb455a85c61bb4c7ff3058593 )
    {
        Py_DECREF( frame_7b2a542fb455a85c61bb4c7ff3058593 );
    }
    cache_frame_7b2a542fb455a85c61bb4c7ff3058593 = NULL;

    assertFrameObject( frame_7b2a542fb455a85c61bb4c7ff3058593 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_12_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_12_filter );
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


static PyObject *impl_PIL$ImageFilter$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_radius = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_202801bc728400c8fea8d4f6eea7df60 = NULL;

    struct Nuitka_FrameObject *frame_202801bc728400c8fea8d4f6eea7df60;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_202801bc728400c8fea8d4f6eea7df60, codeobj_202801bc728400c8fea8d4f6eea7df60, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_202801bc728400c8fea8d4f6eea7df60 = cache_frame_202801bc728400c8fea8d4f6eea7df60;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_202801bc728400c8fea8d4f6eea7df60 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_202801bc728400c8fea8d4f6eea7df60 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_radius;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_radius, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_202801bc728400c8fea8d4f6eea7df60 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_202801bc728400c8fea8d4f6eea7df60 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_202801bc728400c8fea8d4f6eea7df60, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_202801bc728400c8fea8d4f6eea7df60->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_202801bc728400c8fea8d4f6eea7df60, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_202801bc728400c8fea8d4f6eea7df60,
        type_description_1,
        par_self,
        par_radius
    );


    // Release cached frame.
    if ( frame_202801bc728400c8fea8d4f6eea7df60 == cache_frame_202801bc728400c8fea8d4f6eea7df60 )
    {
        Py_DECREF( frame_202801bc728400c8fea8d4f6eea7df60 );
    }
    cache_frame_202801bc728400c8fea8d4f6eea7df60 = NULL;

    assertFrameObject( frame_202801bc728400c8fea8d4f6eea7df60 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_13___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_13___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_14_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_6604ee20a0dc45690e744887e5d0cba5 = NULL;

    struct Nuitka_FrameObject *frame_6604ee20a0dc45690e744887e5d0cba5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6604ee20a0dc45690e744887e5d0cba5, codeobj_6604ee20a0dc45690e744887e5d0cba5, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_6604ee20a0dc45690e744887e5d0cba5 = cache_frame_6604ee20a0dc45690e744887e5d0cba5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6604ee20a0dc45690e744887e5d0cba5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6604ee20a0dc45690e744887e5d0cba5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_box_blur );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_radius );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6604ee20a0dc45690e744887e5d0cba5->m_frame.f_lineno = 180;
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


        exception_lineno = 180;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6604ee20a0dc45690e744887e5d0cba5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6604ee20a0dc45690e744887e5d0cba5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6604ee20a0dc45690e744887e5d0cba5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6604ee20a0dc45690e744887e5d0cba5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6604ee20a0dc45690e744887e5d0cba5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6604ee20a0dc45690e744887e5d0cba5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6604ee20a0dc45690e744887e5d0cba5,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_6604ee20a0dc45690e744887e5d0cba5 == cache_frame_6604ee20a0dc45690e744887e5d0cba5 )
    {
        Py_DECREF( frame_6604ee20a0dc45690e744887e5d0cba5 );
    }
    cache_frame_6604ee20a0dc45690e744887e5d0cba5 = NULL;

    assertFrameObject( frame_6604ee20a0dc45690e744887e5d0cba5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_14_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_14_filter );
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


static PyObject *impl_PIL$ImageFilter$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_radius = python_pars[ 1 ];
    PyObject *par_percent = python_pars[ 2 ];
    PyObject *par_threshold = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_5eb23fb0e8f0b499206b84103666caa2 = NULL;

    struct Nuitka_FrameObject *frame_5eb23fb0e8f0b499206b84103666caa2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5eb23fb0e8f0b499206b84103666caa2, codeobj_5eb23fb0e8f0b499206b84103666caa2, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5eb23fb0e8f0b499206b84103666caa2 = cache_frame_5eb23fb0e8f0b499206b84103666caa2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5eb23fb0e8f0b499206b84103666caa2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5eb23fb0e8f0b499206b84103666caa2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_radius;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_radius, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_percent;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "percent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_percent, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_threshold;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "threshold" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_threshold, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5eb23fb0e8f0b499206b84103666caa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5eb23fb0e8f0b499206b84103666caa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5eb23fb0e8f0b499206b84103666caa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5eb23fb0e8f0b499206b84103666caa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5eb23fb0e8f0b499206b84103666caa2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5eb23fb0e8f0b499206b84103666caa2,
        type_description_1,
        par_self,
        par_radius,
        par_percent,
        par_threshold
    );


    // Release cached frame.
    if ( frame_5eb23fb0e8f0b499206b84103666caa2 == cache_frame_5eb23fb0e8f0b499206b84103666caa2 )
    {
        Py_DECREF( frame_5eb23fb0e8f0b499206b84103666caa2 );
    }
    cache_frame_5eb23fb0e8f0b499206b84103666caa2 = NULL;

    assertFrameObject( frame_5eb23fb0e8f0b499206b84103666caa2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

    Py_XDECREF( par_percent );
    par_percent = NULL;

    Py_XDECREF( par_threshold );
    par_threshold = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_radius );
    par_radius = NULL;

    Py_XDECREF( par_percent );
    par_percent = NULL;

    Py_XDECREF( par_threshold );
    par_threshold = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_15___init__ );
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


static PyObject *impl_PIL$ImageFilter$$$function_16_filter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_image = python_pars[ 1 ];
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
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_5a9c6d0f5c032b5597f14f80a895667e = NULL;

    struct Nuitka_FrameObject *frame_5a9c6d0f5c032b5597f14f80a895667e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a9c6d0f5c032b5597f14f80a895667e, codeobj_5a9c6d0f5c032b5597f14f80a895667e, module_PIL$ImageFilter, sizeof(void *)+sizeof(void *) );
    frame_5a9c6d0f5c032b5597f14f80a895667e = cache_frame_5a9c6d0f5c032b5597f14f80a895667e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a9c6d0f5c032b5597f14f80a895667e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a9c6d0f5c032b5597f14f80a895667e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_image;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unsharp_mask );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_radius );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_percent );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_threshold );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_5a9c6d0f5c032b5597f14f80a895667e->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a9c6d0f5c032b5597f14f80a895667e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a9c6d0f5c032b5597f14f80a895667e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a9c6d0f5c032b5597f14f80a895667e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a9c6d0f5c032b5597f14f80a895667e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a9c6d0f5c032b5597f14f80a895667e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a9c6d0f5c032b5597f14f80a895667e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a9c6d0f5c032b5597f14f80a895667e,
        type_description_1,
        par_self,
        par_image
    );


    // Release cached frame.
    if ( frame_5a9c6d0f5c032b5597f14f80a895667e == cache_frame_5a9c6d0f5c032b5597f14f80a895667e )
    {
        Py_DECREF( frame_5a9c6d0f5c032b5597f14f80a895667e );
    }
    cache_frame_5a9c6d0f5c032b5597f14f80a895667e = NULL;

    assertFrameObject( frame_5a9c6d0f5c032b5597f14f80a895667e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_16_filter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter$$$function_16_filter );
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



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_10_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_10_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_ad2377f48771b1c9cb58244227c66ed2,
#endif
        codeobj_25170ad76dac0933ed7503708929d062,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_11___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_2b180389176b4d3a73fee63540fbbd45,
#endif
        codeobj_93cf4daaff3131ef2813e071b0a9f830,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_12_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_12_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_2a5df70489150f55f68057fabbf49e99,
#endif
        codeobj_7b2a542fb455a85c61bb4c7ff3058593,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_13___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_d298fb076e35d16b6e1326edf579d3dc,
#endif
        codeobj_202801bc728400c8fea8d4f6eea7df60,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_14_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_14_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_73e534cca1bbc0a54069e51041ff1c06,
#endif
        codeobj_6604ee20a0dc45690e744887e5d0cba5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_15___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_f9ba36e955d752318455b0dcd7d14431,
#endif
        codeobj_5eb23fb0e8f0b499206b84103666caa2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_16_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_16_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_9d1778c0df676849cb5f44cd80d1cd71,
#endif
        codeobj_5a9c6d0f5c032b5597f14f80a895667e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_d6dabd52b1fe8e63e3e930c80e978100,
#endif
        codeobj_46c9a181a71e0f23296b8e34cce99ef1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_1___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_020c75e04126e6782d4f363ba5505678,
#endif
        codeobj_bc368001b911bfd57ea4224b020e3022,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_2_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_2_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_9f4774bec7631f80445f3da1682e2940,
#endif
        codeobj_f843f902aa9e28a649f95431a0ba1464,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_0e707761fe3eb2ed760845bbcb8d455c,
#endif
        codeobj_2977a26c17b9cb95ce18a1475ff1137f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6dc2472cb495de12cc292361620a630a,
#endif
        codeobj_2d01aca9d574ca50d64172c1b7e01738,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_5_filter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_5_filter,
        const_str_plain_filter,
#if PYTHON_VERSION >= 330
        const_str_digest_ce76fff8dc7cb21df05ce07af6c77202,
#endif
        codeobj_3bcc8d0fbabffe372861f5c31f4578ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_a7e7d7e0b19f891fd965ca8442de8a5d,
#endif
        codeobj_4570c993ba6bf09607958954a8ea7a80,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_7___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_9d9f2a828ef70b679236a91eca1758e2,
#endif
        codeobj_2ba306a652fa3647a125b33508ff031b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_02ef7966359291d22aa51be1f1d0dabf,
#endif
        codeobj_7b827e494a585f16c06f222d33c4245d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageFilter$$$function_9___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageFilter$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_dfb7408a8a6006f2df58c7f45419b5a8,
#endif
        codeobj_aab7e6a813bc564f8c6c91779f2dc084,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_PIL$ImageFilter,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$ImageFilter =
{
    PyModuleDef_HEAD_INIT,
    "PIL.ImageFilter",   /* m_name */
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

MOD_INIT_DECL( PIL$ImageFilter )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$ImageFilter );
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
    puts("PIL.ImageFilter: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PIL.ImageFilter: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPIL$ImageFilter" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$ImageFilter = Py_InitModule4(
        "PIL.ImageFilter",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_PIL$ImageFilter = PyModule_Create( &mdef_PIL$ImageFilter );
#endif

    moduledict_PIL$ImageFilter = MODULE_DICT( module_PIL$ImageFilter );

    CHECK_OBJECT( module_PIL$ImageFilter );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2, module_PIL$ImageFilter );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var_filter = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_4_var___qualname__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___doc__ = NULL;
    PyObject *outline_4_var_name = NULL;
    PyObject *outline_4_var___init__ = NULL;
    PyObject *outline_4_var_filter = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_5_var___qualname__ = NULL;
    PyObject *outline_5_var___module__ = NULL;
    PyObject *outline_5_var___doc__ = NULL;
    PyObject *outline_5_var_name = NULL;
    PyObject *outline_5_var___init__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_6_var___qualname__ = NULL;
    PyObject *outline_6_var___module__ = NULL;
    PyObject *outline_6_var___doc__ = NULL;
    PyObject *outline_6_var_name = NULL;
    PyObject *outline_6_var___init__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_7_var___qualname__ = NULL;
    PyObject *outline_7_var___module__ = NULL;
    PyObject *outline_7_var___doc__ = NULL;
    PyObject *outline_7_var_name = NULL;
    PyObject *outline_7_var___init__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_8_var___qualname__ = NULL;
    PyObject *outline_8_var___module__ = NULL;
    PyObject *outline_8_var___doc__ = NULL;
    PyObject *outline_8_var_name = NULL;
    PyObject *outline_8_var___init__ = NULL;
    PyObject *outline_8_var_filter = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_9_var___qualname__ = NULL;
    PyObject *outline_9_var___module__ = NULL;
    PyObject *outline_9_var___doc__ = NULL;
    PyObject *outline_9_var_name = NULL;
    PyObject *outline_9_var___init__ = NULL;
    PyObject *outline_9_var_filter = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_10_var___qualname__ = NULL;
    PyObject *outline_10_var___module__ = NULL;
    PyObject *outline_10_var___doc__ = NULL;
    PyObject *outline_10_var_name = NULL;
    PyObject *outline_10_var___init__ = NULL;
    PyObject *outline_10_var_filter = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_11_var___qualname__ = NULL;
    PyObject *outline_11_var___module__ = NULL;
    PyObject *outline_11_var___doc__ = NULL;
    PyObject *outline_11_var_name = NULL;
    PyObject *outline_11_var___init__ = NULL;
    PyObject *outline_11_var_filter = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_12_var___qualname__ = NULL;
    PyObject *outline_12_var___module__ = NULL;
    PyObject *outline_12_var_name = NULL;
    PyObject *outline_12_var_filterargs = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_13_var___qualname__ = NULL;
    PyObject *outline_13_var___module__ = NULL;
    PyObject *outline_13_var_name = NULL;
    PyObject *outline_13_var_filterargs = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_14_var___qualname__ = NULL;
    PyObject *outline_14_var___module__ = NULL;
    PyObject *outline_14_var_name = NULL;
    PyObject *outline_14_var_filterargs = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_15_var___qualname__ = NULL;
    PyObject *outline_15_var___module__ = NULL;
    PyObject *outline_15_var_name = NULL;
    PyObject *outline_15_var_filterargs = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_16_var___qualname__ = NULL;
    PyObject *outline_16_var___module__ = NULL;
    PyObject *outline_16_var_name = NULL;
    PyObject *outline_16_var_filterargs = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_17_var___qualname__ = NULL;
    PyObject *outline_17_var___module__ = NULL;
    PyObject *outline_17_var_name = NULL;
    PyObject *outline_17_var_filterargs = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_18_var___qualname__ = NULL;
    PyObject *outline_18_var___module__ = NULL;
    PyObject *outline_18_var_name = NULL;
    PyObject *outline_18_var_filterargs = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_19_var___qualname__ = NULL;
    PyObject *outline_19_var___module__ = NULL;
    PyObject *outline_19_var_name = NULL;
    PyObject *outline_19_var_filterargs = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_20_var___qualname__ = NULL;
    PyObject *outline_20_var___module__ = NULL;
    PyObject *outline_20_var_name = NULL;
    PyObject *outline_20_var_filterargs = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_21_var___qualname__ = NULL;
    PyObject *outline_21_var___module__ = NULL;
    PyObject *outline_21_var_name = NULL;
    PyObject *outline_21_var_filterargs = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
    PyObject *tmp_args_name_29;
    PyObject *tmp_args_name_30;
    PyObject *tmp_args_name_31;
    PyObject *tmp_args_name_32;
    PyObject *tmp_args_name_33;
    PyObject *tmp_args_name_34;
    PyObject *tmp_args_name_35;
    PyObject *tmp_args_name_36;
    PyObject *tmp_args_name_37;
    PyObject *tmp_args_name_38;
    PyObject *tmp_args_name_39;
    PyObject *tmp_args_name_40;
    PyObject *tmp_args_name_41;
    PyObject *tmp_args_name_42;
    PyObject *tmp_args_name_43;
    PyObject *tmp_args_name_44;
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
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
    PyObject *tmp_assign_source_210;
    PyObject *tmp_assign_source_211;
    PyObject *tmp_assign_source_212;
    PyObject *tmp_assign_source_213;
    PyObject *tmp_assign_source_214;
    PyObject *tmp_assign_source_215;
    PyObject *tmp_assign_source_216;
    PyObject *tmp_assign_source_217;
    PyObject *tmp_assign_source_218;
    PyObject *tmp_assign_source_219;
    PyObject *tmp_assign_source_220;
    PyObject *tmp_assign_source_221;
    PyObject *tmp_assign_source_222;
    PyObject *tmp_assign_source_223;
    PyObject *tmp_assign_source_224;
    PyObject *tmp_assign_source_225;
    PyObject *tmp_assign_source_226;
    PyObject *tmp_assign_source_227;
    PyObject *tmp_assign_source_228;
    PyObject *tmp_assign_source_229;
    PyObject *tmp_assign_source_230;
    PyObject *tmp_assign_source_231;
    PyObject *tmp_assign_source_232;
    PyObject *tmp_assign_source_233;
    PyObject *tmp_assign_source_234;
    PyObject *tmp_assign_source_235;
    PyObject *tmp_assign_source_236;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
    PyObject *tmp_bases_name_15;
    PyObject *tmp_bases_name_16;
    PyObject *tmp_bases_name_17;
    PyObject *tmp_bases_name_18;
    PyObject *tmp_bases_name_19;
    PyObject *tmp_bases_name_20;
    PyObject *tmp_bases_name_21;
    PyObject *tmp_bases_name_22;
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
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
    int tmp_cmp_In_28;
    int tmp_cmp_In_29;
    int tmp_cmp_In_30;
    int tmp_cmp_In_31;
    int tmp_cmp_In_32;
    int tmp_cmp_In_33;
    int tmp_cmp_In_34;
    int tmp_cmp_In_35;
    int tmp_cmp_In_36;
    int tmp_cmp_In_37;
    int tmp_cmp_In_38;
    int tmp_cmp_In_39;
    int tmp_cmp_In_40;
    int tmp_cmp_In_41;
    int tmp_cmp_In_42;
    int tmp_cmp_In_43;
    int tmp_cmp_In_44;
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
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_left_35;
    PyObject *tmp_compare_left_36;
    PyObject *tmp_compare_left_37;
    PyObject *tmp_compare_left_38;
    PyObject *tmp_compare_left_39;
    PyObject *tmp_compare_left_40;
    PyObject *tmp_compare_left_41;
    PyObject *tmp_compare_left_42;
    PyObject *tmp_compare_left_43;
    PyObject *tmp_compare_left_44;
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
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_compare_right_35;
    PyObject *tmp_compare_right_36;
    PyObject *tmp_compare_right_37;
    PyObject *tmp_compare_right_38;
    PyObject *tmp_compare_right_39;
    PyObject *tmp_compare_right_40;
    PyObject *tmp_compare_right_41;
    PyObject *tmp_compare_right_42;
    PyObject *tmp_compare_right_43;
    PyObject *tmp_compare_right_44;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
    PyObject *tmp_hasattr_attr_20;
    PyObject *tmp_hasattr_attr_21;
    PyObject *tmp_hasattr_attr_22;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_hasattr_source_20;
    PyObject *tmp_hasattr_source_21;
    PyObject *tmp_hasattr_source_22;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_kw_name_29;
    PyObject *tmp_kw_name_30;
    PyObject *tmp_kw_name_31;
    PyObject *tmp_kw_name_32;
    PyObject *tmp_kw_name_33;
    PyObject *tmp_kw_name_34;
    PyObject *tmp_kw_name_35;
    PyObject *tmp_kw_name_36;
    PyObject *tmp_kw_name_37;
    PyObject *tmp_kw_name_38;
    PyObject *tmp_kw_name_39;
    PyObject *tmp_kw_name_40;
    PyObject *tmp_kw_name_41;
    PyObject *tmp_kw_name_42;
    PyObject *tmp_kw_name_43;
    PyObject *tmp_kw_name_44;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_metaclass_name_15;
    PyObject *tmp_metaclass_name_16;
    PyObject *tmp_metaclass_name_17;
    PyObject *tmp_metaclass_name_18;
    PyObject *tmp_metaclass_name_19;
    PyObject *tmp_metaclass_name_20;
    PyObject *tmp_metaclass_name_21;
    PyObject *tmp_metaclass_name_22;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    PyObject *tmp_outline_return_value_21;
    PyObject *tmp_outline_return_value_22;
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
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
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
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;
    PyObject *tmp_tuple_element_62;
    PyObject *tmp_tuple_element_63;
    PyObject *tmp_tuple_element_64;
    PyObject *tmp_tuple_element_65;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    struct Nuitka_FrameObject *frame_d67d95c185380705e95193c1ecbd55a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    tmp_outline_return_value_21 = NULL;
    tmp_outline_return_value_22 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_4 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_5 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_6 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_7 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_8 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_9 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_10 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_11 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_12 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_13 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_14 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_15 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_16 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_17 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_18 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_19 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_20 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_21 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_22 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d67d95c185380705e95193c1ecbd55a5 = MAKE_MODULE_FRAME( codeobj_d67d95c185380705e95193c1ecbd55a5, module_PIL$ImageFilter );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d67d95c185380705e95193c1ecbd55a5 );
    assert( Py_REFCNT( frame_d67d95c185380705e95193c1ecbd55a5 ) == 2 );

    // Framed code:
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_PIL;
    UPDATE_STRING_DICT0( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_functools;
    tmp_globals_name_1 = (PyObject *)moduledict_PIL$ImageFilter;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 18;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_8 );
    tmp_class_creation_1__bases = tmp_assign_source_8;

    tmp_assign_source_9 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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


        exception_lineno = 21;

        goto try_except_handler_1;
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


        exception_lineno = 21;

        goto try_except_handler_1;
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


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_10 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 21;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_10;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
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
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_Filter;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 21;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_11 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_11;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_13 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___module__ = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_plain_Filter;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___qualname__ = tmp_assign_source_14;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_Filter;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_2 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 21;

        goto try_except_handler_2;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 21;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 21;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_15;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 21;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Filter, tmp_assign_source_12 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_16 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Filter );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Filter );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Filter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_16;

    tmp_assign_source_17 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_17;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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


        exception_lineno = 25;

        goto try_except_handler_3;
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


        exception_lineno = 25;

        goto try_except_handler_3;
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


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_18 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 25;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_18;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
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
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_MultibandFilter;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 25;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_19 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_19;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_21 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_1_var___module__ = tmp_assign_source_21;

    tmp_assign_source_22 = const_str_plain_MultibandFilter;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_22 );
    outline_1_var___qualname__ = tmp_assign_source_22;

    // Tried code:
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_MultibandFilter;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_5 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__,
            outline_1_var___qualname__
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 25;

        goto try_except_handler_4;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___module__,
            outline_1_var___module__
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 25;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 25;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_4;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_23;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 25;
    goto try_except_handler_3;
    outline_result_2:;
    tmp_assign_source_20 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MultibandFilter, tmp_assign_source_20 );
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_24 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MultibandFilter );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultibandFilter );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultibandFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_24;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_25;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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


        exception_lineno = 29;

        goto try_except_handler_5;
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


        exception_lineno = 29;

        goto try_except_handler_5;
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


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 29;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_26;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
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
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_7 = const_str_plain_Kernel;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 29;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_29 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_2_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = const_str_digest_8476291df6a035f15eac6851c1169bd1;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_2_var___doc__ = tmp_assign_source_30;

    tmp_assign_source_31 = const_str_plain_Kernel;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_2_var___qualname__ = tmp_assign_source_31;

    tmp_defaults_1 = const_tuple_none_int_0_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_32 = MAKE_FUNCTION_PIL$ImageFilter$$$function_1___init__( tmp_defaults_1 );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_PIL$ImageFilter$$$function_2_filter(  );
    assert( outline_2_var_filter == NULL );
    outline_2_var_filter = tmp_assign_source_33;

    // Tried code:
    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_8 = const_str_plain_Kernel;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_8 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_2_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___doc__,
            outline_2_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
                const_str_plain___doc__
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_2_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___init__,
            outline_2_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
                const_str_plain___init__
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_2_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain_filter,
            outline_2_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
                const_str_plain_filter
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 29;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_6;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_34;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var_filter );
    outline_2_var_filter = NULL;

    goto outline_result_3;
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

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var_filter );
    outline_2_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 29;
    goto try_except_handler_5;
    outline_result_3:;
    tmp_assign_source_28 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Kernel, tmp_assign_source_28 );
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_35 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Kernel );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Kernel );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Kernel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_35;

    tmp_assign_source_36 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_36;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_4 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_37 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 61;

        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_37;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_BuiltinFilter;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 61;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_7;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_38 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_38;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_40 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_40 );
    outline_3_var___module__ = tmp_assign_source_40;

    tmp_assign_source_41 = const_str_plain_BuiltinFilter;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_41 );
    outline_3_var___qualname__ = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_PIL$ImageFilter$$$function_3___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_42;

    // Tried code:
    tmp_called_name_9 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_11 = const_str_plain_BuiltinFilter;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_11 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 61;

        goto try_except_handler_8;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 61;

        goto try_except_handler_8;
    }
    if ( outline_3_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___init__,
            outline_3_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 61;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 61;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_8;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_43;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    goto outline_result_4;
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

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 61;
    goto try_except_handler_7;
    outline_result_4:;
    tmp_assign_source_39 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter, tmp_assign_source_39 );
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_44 = PyTuple_New( 1 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Filter );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Filter );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Filter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_44;

    tmp_assign_source_45 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_45;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_5 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 66;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_46;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_13 = const_str_plain_RankFilter;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 66;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_9;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_47 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_47;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_5);
    locals_dict_5 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_49 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_49 );
    outline_4_var___module__ = tmp_assign_source_49;

    tmp_assign_source_50 = const_str_digest_c3c1dd11c1e933e6a2ea4d04b622099b;
    assert( outline_4_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_50 );
    outline_4_var___doc__ = tmp_assign_source_50;

    tmp_assign_source_51 = const_str_plain_RankFilter;
    assert( outline_4_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_51 );
    outline_4_var___qualname__ = tmp_assign_source_51;

    tmp_assign_source_52 = const_str_plain_Rank;
    assert( outline_4_var_name == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_4_var_name = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_PIL$ImageFilter$$$function_4___init__(  );
    assert( outline_4_var___init__ == NULL );
    outline_4_var___init__ = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_PIL$ImageFilter$$$function_5_filter(  );
    assert( outline_4_var_filter == NULL );
    outline_4_var_filter = tmp_assign_source_54;

    // Tried code:
    tmp_called_name_11 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_14 = const_str_plain_RankFilter;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_dict_5;
    Py_INCREF( tmp_tuple_element_14 );
    if ( outline_4_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___qualname__,
            outline_4_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    if ( outline_4_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___module__,
            outline_4_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    if ( outline_4_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___doc__,
            outline_4_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    if ( outline_4_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain_name,
            outline_4_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    if ( outline_4_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain___init__,
            outline_4_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    if ( outline_4_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_14,
            const_str_plain_filter,
            outline_4_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_14,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_14,
                const_str_plain_filter
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_14 );

        exception_lineno = 66;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 66;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_10;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_55;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    Py_XDECREF( outline_4_var_name );
    outline_4_var_name = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    Py_XDECREF( outline_4_var_filter );
    outline_4_var_filter = NULL;

    goto outline_result_5;
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

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    Py_XDECREF( outline_4_var_name );
    outline_4_var_name = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    Py_XDECREF( outline_4_var_filter );
    outline_4_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 66;
    goto try_except_handler_9;
    outline_result_5:;
    tmp_assign_source_48 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_RankFilter, tmp_assign_source_48 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_56 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_RankFilter );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankFilter );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RankFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_57;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_6 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_58 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 89;

        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_58;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_MedianFilter;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_16 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 89;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_11;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_59;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_6);
    locals_dict_6 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_61 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_5_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_61 );
    outline_5_var___module__ = tmp_assign_source_61;

    tmp_assign_source_62 = const_str_digest_e62e3b3ba046da0530d5673e420b801f;
    assert( outline_5_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_62 );
    outline_5_var___doc__ = tmp_assign_source_62;

    tmp_assign_source_63 = const_str_plain_MedianFilter;
    assert( outline_5_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_63 );
    outline_5_var___qualname__ = tmp_assign_source_63;

    tmp_assign_source_64 = const_str_plain_Median;
    assert( outline_5_var_name == NULL );
    Py_INCREF( tmp_assign_source_64 );
    outline_5_var_name = tmp_assign_source_64;

    tmp_defaults_2 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_65 = MAKE_FUNCTION_PIL$ImageFilter$$$function_6___init__( tmp_defaults_2 );
    assert( outline_5_var___init__ == NULL );
    outline_5_var___init__ = tmp_assign_source_65;

    // Tried code:
    tmp_called_name_13 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_name_12 = PyTuple_New( 3 );
    tmp_tuple_element_17 = const_str_plain_MedianFilter;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_dict_6;
    Py_INCREF( tmp_tuple_element_17 );
    if ( outline_5_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__,
            outline_5_var___qualname__
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 89;

        goto try_except_handler_12;
    }
    if ( outline_5_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___module__,
            outline_5_var___module__
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 89;

        goto try_except_handler_12;
    }
    if ( outline_5_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___doc__,
            outline_5_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 89;

        goto try_except_handler_12;
    }
    if ( outline_5_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain_name,
            outline_5_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 89;

        goto try_except_handler_12;
    }
    if ( outline_5_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___init__,
            outline_5_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 89;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_17 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 89;
    tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;

        goto try_except_handler_12;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_66;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_name );
    outline_5_var_name = NULL;

    Py_XDECREF( outline_5_var___init__ );
    outline_5_var___init__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_name );
    outline_5_var_name = NULL;

    Py_XDECREF( outline_5_var___init__ );
    outline_5_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 89;
    goto try_except_handler_11;
    outline_result_6:;
    tmp_assign_source_60 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MedianFilter, tmp_assign_source_60 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_67 = PyTuple_New( 1 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_RankFilter );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankFilter );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_67 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RankFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_67;

    tmp_assign_source_68 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_68;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_7 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_69 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_7 );

        exception_lineno = 103;

        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_7 );
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_69;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    tmp_args_name_13 = PyTuple_New( 2 );
    tmp_tuple_element_19 = const_str_plain_MinFilter;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_19 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 103;
    tmp_assign_source_70 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_13;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_70 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_70;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_7);
    locals_dict_7 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_72 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_6_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_72 );
    outline_6_var___module__ = tmp_assign_source_72;

    tmp_assign_source_73 = const_str_digest_19bd478da4cd8d542b9dab88bfd5da36;
    assert( outline_6_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_73 );
    outline_6_var___doc__ = tmp_assign_source_73;

    tmp_assign_source_74 = const_str_plain_MinFilter;
    assert( outline_6_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_6_var___qualname__ = tmp_assign_source_74;

    tmp_assign_source_75 = const_str_plain_Min;
    assert( outline_6_var_name == NULL );
    Py_INCREF( tmp_assign_source_75 );
    outline_6_var_name = tmp_assign_source_75;

    tmp_defaults_3 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_76 = MAKE_FUNCTION_PIL$ImageFilter$$$function_7___init__( tmp_defaults_3 );
    assert( outline_6_var___init__ == NULL );
    outline_6_var___init__ = tmp_assign_source_76;

    // Tried code:
    tmp_called_name_15 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_15 );
    tmp_args_name_14 = PyTuple_New( 3 );
    tmp_tuple_element_20 = const_str_plain_MinFilter;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_dict_7;
    Py_INCREF( tmp_tuple_element_20 );
    if ( outline_6_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__,
            outline_6_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 103;

        goto try_except_handler_14;
    }
    if ( outline_6_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___module__,
            outline_6_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 103;

        goto try_except_handler_14;
    }
    if ( outline_6_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__,
            outline_6_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 103;

        goto try_except_handler_14;
    }
    if ( outline_6_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_name,
            outline_6_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 103;

        goto try_except_handler_14;
    }
    if ( outline_6_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___init__,
            outline_6_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_14 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 103;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_20 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 103;
    tmp_assign_source_77 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;

        goto try_except_handler_14;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_77;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    Py_XDECREF( outline_6_var___qualname__ );
    outline_6_var___qualname__ = NULL;

    Py_XDECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    Py_XDECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    Py_XDECREF( outline_6_var_name );
    outline_6_var_name = NULL;

    Py_XDECREF( outline_6_var___init__ );
    outline_6_var___init__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_6_var___qualname__ );
    outline_6_var___qualname__ = NULL;

    Py_XDECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    Py_XDECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    Py_XDECREF( outline_6_var_name );
    outline_6_var_name = NULL;

    Py_XDECREF( outline_6_var___init__ );
    outline_6_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 103;
    goto try_except_handler_13;
    outline_result_7:;
    tmp_assign_source_71 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MinFilter, tmp_assign_source_71 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_assign_source_78 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_RankFilter );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankFilter );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_78 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RankFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;

        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_78, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_78;

    tmp_assign_source_79 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_79;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_15 == -1) );
    if ( tmp_cmp_In_15 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_8 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_80 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_8 );

        exception_lineno = 117;

        goto try_except_handler_15;
    }
    Py_DECREF( tmp_metaclass_name_8 );
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_80;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_16 == -1) );
    if ( tmp_cmp_In_16 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    tmp_args_name_15 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_MaxFilter;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_22 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 117;
    tmp_assign_source_81 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_15;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_81 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_81;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_8);
    locals_dict_8 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_83 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_7_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_83 );
    outline_7_var___module__ = tmp_assign_source_83;

    tmp_assign_source_84 = const_str_digest_69d247ce8026388825b3f6362c81b3a0;
    assert( outline_7_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_84 );
    outline_7_var___doc__ = tmp_assign_source_84;

    tmp_assign_source_85 = const_str_plain_MaxFilter;
    assert( outline_7_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_85 );
    outline_7_var___qualname__ = tmp_assign_source_85;

    tmp_assign_source_86 = const_str_plain_Max;
    assert( outline_7_var_name == NULL );
    Py_INCREF( tmp_assign_source_86 );
    outline_7_var_name = tmp_assign_source_86;

    tmp_defaults_4 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_87 = MAKE_FUNCTION_PIL$ImageFilter$$$function_8___init__( tmp_defaults_4 );
    assert( outline_7_var___init__ == NULL );
    outline_7_var___init__ = tmp_assign_source_87;

    // Tried code:
    tmp_called_name_17 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_17 );
    tmp_args_name_16 = PyTuple_New( 3 );
    tmp_tuple_element_23 = const_str_plain_MaxFilter;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_23 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_23 );
    tmp_tuple_element_23 = locals_dict_8;
    Py_INCREF( tmp_tuple_element_23 );
    if ( outline_7_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___qualname__,
            outline_7_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 117;

        goto try_except_handler_16;
    }
    if ( outline_7_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___module__,
            outline_7_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 117;

        goto try_except_handler_16;
    }
    if ( outline_7_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___doc__,
            outline_7_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 117;

        goto try_except_handler_16;
    }
    if ( outline_7_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain_name,
            outline_7_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 117;

        goto try_except_handler_16;
    }
    if ( outline_7_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_23,
            const_str_plain___init__,
            outline_7_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_23,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_23,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_16 );
        Py_DECREF( tmp_tuple_element_23 );

        exception_lineno = 117;

        goto try_except_handler_16;
    }
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_23 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 117;
    tmp_assign_source_88 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;

        goto try_except_handler_16;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_88;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    Py_XDECREF( outline_7_var___qualname__ );
    outline_7_var___qualname__ = NULL;

    Py_XDECREF( outline_7_var___module__ );
    outline_7_var___module__ = NULL;

    Py_XDECREF( outline_7_var___doc__ );
    outline_7_var___doc__ = NULL;

    Py_XDECREF( outline_7_var_name );
    outline_7_var_name = NULL;

    Py_XDECREF( outline_7_var___init__ );
    outline_7_var___init__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_7_var___qualname__ );
    outline_7_var___qualname__ = NULL;

    Py_XDECREF( outline_7_var___module__ );
    outline_7_var___module__ = NULL;

    Py_XDECREF( outline_7_var___doc__ );
    outline_7_var___doc__ = NULL;

    Py_XDECREF( outline_7_var_name );
    outline_7_var_name = NULL;

    Py_XDECREF( outline_7_var___init__ );
    outline_7_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 117;
    goto try_except_handler_15;
    outline_result_8:;
    tmp_assign_source_82 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MaxFilter, tmp_assign_source_82 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_assign_source_89 = PyTuple_New( 1 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_Filter );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Filter );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_89 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Filter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_89, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_89;

    tmp_assign_source_90 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_90;

    tmp_compare_left_17 = const_str_plain_metaclass;
    tmp_compare_right_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    assert( !(tmp_cmp_In_17 == -1) );
    if ( tmp_cmp_In_17 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_9 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_cond_value_9 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_91 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_9 );

        exception_lineno = 131;

        goto try_except_handler_17;
    }
    Py_DECREF( tmp_metaclass_name_9 );
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_91;

    tmp_compare_left_18 = const_str_plain_metaclass;
    tmp_compare_right_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_18 == -1) );
    if ( tmp_cmp_In_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    tmp_args_name_17 = PyTuple_New( 2 );
    tmp_tuple_element_25 = const_str_plain_ModeFilter;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_25 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_25 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 131;
    tmp_assign_source_92 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_17;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_92 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_92;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_9);
    locals_dict_9 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_94 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_8_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_94 );
    outline_8_var___module__ = tmp_assign_source_94;

    tmp_assign_source_95 = const_str_digest_cbdb9f50da2bbce87bb4fd75aa16bbda;
    assert( outline_8_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_95 );
    outline_8_var___doc__ = tmp_assign_source_95;

    tmp_assign_source_96 = const_str_plain_ModeFilter;
    assert( outline_8_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_96 );
    outline_8_var___qualname__ = tmp_assign_source_96;

    tmp_assign_source_97 = const_str_plain_Mode;
    assert( outline_8_var_name == NULL );
    Py_INCREF( tmp_assign_source_97 );
    outline_8_var_name = tmp_assign_source_97;

    tmp_defaults_5 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_98 = MAKE_FUNCTION_PIL$ImageFilter$$$function_9___init__( tmp_defaults_5 );
    assert( outline_8_var___init__ == NULL );
    outline_8_var___init__ = tmp_assign_source_98;

    tmp_assign_source_99 = MAKE_FUNCTION_PIL$ImageFilter$$$function_10_filter(  );
    assert( outline_8_var_filter == NULL );
    outline_8_var_filter = tmp_assign_source_99;

    // Tried code:
    tmp_called_name_19 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_19 );
    tmp_args_name_18 = PyTuple_New( 3 );
    tmp_tuple_element_26 = const_str_plain_ModeFilter;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_26 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = locals_dict_9;
    Py_INCREF( tmp_tuple_element_26 );
    if ( outline_8_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___qualname__,
            outline_8_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    if ( outline_8_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___module__,
            outline_8_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    if ( outline_8_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___doc__,
            outline_8_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    if ( outline_8_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain_name,
            outline_8_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    if ( outline_8_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain___init__,
            outline_8_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    if ( outline_8_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_26,
            const_str_plain_filter,
            outline_8_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_26,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_26,
                const_str_plain_filter
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
        Py_DECREF( tmp_args_name_18 );
        Py_DECREF( tmp_tuple_element_26 );

        exception_lineno = 131;

        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_26 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 131;
    tmp_assign_source_100 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_18;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_100;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    Py_XDECREF( outline_8_var___qualname__ );
    outline_8_var___qualname__ = NULL;

    Py_XDECREF( outline_8_var___module__ );
    outline_8_var___module__ = NULL;

    Py_XDECREF( outline_8_var___doc__ );
    outline_8_var___doc__ = NULL;

    Py_XDECREF( outline_8_var_name );
    outline_8_var_name = NULL;

    Py_XDECREF( outline_8_var___init__ );
    outline_8_var___init__ = NULL;

    Py_XDECREF( outline_8_var_filter );
    outline_8_var_filter = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_8_var___qualname__ );
    outline_8_var___qualname__ = NULL;

    Py_XDECREF( outline_8_var___module__ );
    outline_8_var___module__ = NULL;

    Py_XDECREF( outline_8_var___doc__ );
    outline_8_var___doc__ = NULL;

    Py_XDECREF( outline_8_var_name );
    outline_8_var_name = NULL;

    Py_XDECREF( outline_8_var___init__ );
    outline_8_var___init__ = NULL;

    Py_XDECREF( outline_8_var_filter );
    outline_8_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 131;
    goto try_except_handler_17;
    outline_result_9:;
    tmp_assign_source_93 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_ModeFilter, tmp_assign_source_93 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_assign_source_101 = PyTuple_New( 1 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MultibandFilter );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultibandFilter );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_101 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultibandFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;

        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_101, 0, tmp_tuple_element_27 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_101;

    tmp_assign_source_102 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_102;

    tmp_compare_left_19 = const_str_plain_metaclass;
    tmp_compare_right_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_In_19 == -1) );
    if ( tmp_cmp_In_19 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_10 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_cond_value_10 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_103 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_10 );

        exception_lineno = 149;

        goto try_except_handler_19;
    }
    Py_DECREF( tmp_metaclass_name_10 );
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_103;

    tmp_compare_left_20 = const_str_plain_metaclass;
    tmp_compare_right_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    assert( !(tmp_cmp_In_20 == -1) );
    if ( tmp_cmp_In_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    tmp_args_name_19 = PyTuple_New( 2 );
    tmp_tuple_element_28 = const_str_plain_GaussianBlur;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_28 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_28 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 149;
    tmp_assign_source_104 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_19;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_104 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_104;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_10);
    locals_dict_10 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_106 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_9_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_106 );
    outline_9_var___module__ = tmp_assign_source_106;

    tmp_assign_source_107 = const_str_digest_dbc0b3880c1030e6241640916a2febe4;
    assert( outline_9_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_107 );
    outline_9_var___doc__ = tmp_assign_source_107;

    tmp_assign_source_108 = const_str_plain_GaussianBlur;
    assert( outline_9_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_108 );
    outline_9_var___qualname__ = tmp_assign_source_108;

    tmp_assign_source_109 = const_str_plain_GaussianBlur;
    assert( outline_9_var_name == NULL );
    Py_INCREF( tmp_assign_source_109 );
    outline_9_var_name = tmp_assign_source_109;

    tmp_defaults_6 = const_tuple_int_pos_2_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_110 = MAKE_FUNCTION_PIL$ImageFilter$$$function_11___init__( tmp_defaults_6 );
    assert( outline_9_var___init__ == NULL );
    outline_9_var___init__ = tmp_assign_source_110;

    tmp_assign_source_111 = MAKE_FUNCTION_PIL$ImageFilter$$$function_12_filter(  );
    assert( outline_9_var_filter == NULL );
    outline_9_var_filter = tmp_assign_source_111;

    // Tried code:
    tmp_called_name_21 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_21 );
    tmp_args_name_20 = PyTuple_New( 3 );
    tmp_tuple_element_29 = const_str_plain_GaussianBlur;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_29 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_29 );
    tmp_tuple_element_29 = locals_dict_10;
    Py_INCREF( tmp_tuple_element_29 );
    if ( outline_9_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___qualname__,
            outline_9_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    if ( outline_9_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___module__,
            outline_9_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    if ( outline_9_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___doc__,
            outline_9_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    if ( outline_9_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain_name,
            outline_9_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    if ( outline_9_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain___init__,
            outline_9_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    if ( outline_9_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_29,
            const_str_plain_filter,
            outline_9_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_29,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_29,
                const_str_plain_filter
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
        Py_DECREF( tmp_args_name_20 );
        Py_DECREF( tmp_tuple_element_29 );

        exception_lineno = 149;

        goto try_except_handler_20;
    }
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_29 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 149;
    tmp_assign_source_112 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto try_except_handler_20;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_112;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    Py_XDECREF( outline_9_var___qualname__ );
    outline_9_var___qualname__ = NULL;

    Py_XDECREF( outline_9_var___module__ );
    outline_9_var___module__ = NULL;

    Py_XDECREF( outline_9_var___doc__ );
    outline_9_var___doc__ = NULL;

    Py_XDECREF( outline_9_var_name );
    outline_9_var_name = NULL;

    Py_XDECREF( outline_9_var___init__ );
    outline_9_var___init__ = NULL;

    Py_XDECREF( outline_9_var_filter );
    outline_9_var_filter = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_9_var___qualname__ );
    outline_9_var___qualname__ = NULL;

    Py_XDECREF( outline_9_var___module__ );
    outline_9_var___module__ = NULL;

    Py_XDECREF( outline_9_var___doc__ );
    outline_9_var___doc__ = NULL;

    Py_XDECREF( outline_9_var_name );
    outline_9_var_name = NULL;

    Py_XDECREF( outline_9_var___init__ );
    outline_9_var___init__ = NULL;

    Py_XDECREF( outline_9_var_filter );
    outline_9_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 149;
    goto try_except_handler_19;
    outline_result_10:;
    tmp_assign_source_105 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_GaussianBlur, tmp_assign_source_105 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_assign_source_113 = PyTuple_New( 1 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MultibandFilter );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultibandFilter );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_113 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultibandFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;

        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_113, 0, tmp_tuple_element_30 );
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_113;

    tmp_assign_source_114 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_114;

    tmp_compare_left_21 = const_str_plain_metaclass;
    tmp_compare_right_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_In_21 == -1) );
    if ( tmp_cmp_In_21 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_11 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_cond_value_11 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_bases_name_11 );
    tmp_assign_source_115 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_11 );

        exception_lineno = 163;

        goto try_except_handler_21;
    }
    Py_DECREF( tmp_metaclass_name_11 );
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_115;

    tmp_compare_left_22 = const_str_plain_metaclass;
    tmp_compare_right_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    assert( !(tmp_cmp_In_22 == -1) );
    if ( tmp_cmp_In_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    tmp_args_name_21 = PyTuple_New( 2 );
    tmp_tuple_element_31 = const_str_plain_BoxBlur;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_31 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_31 );
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 163;
    tmp_assign_source_116 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_21;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_116 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_116;

    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_11);
    locals_dict_11 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_118 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_10_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_118 );
    outline_10_var___module__ = tmp_assign_source_118;

    tmp_assign_source_119 = const_str_digest_39604897ad47a5d142592f9ba992edf0;
    assert( outline_10_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_119 );
    outline_10_var___doc__ = tmp_assign_source_119;

    tmp_assign_source_120 = const_str_plain_BoxBlur;
    assert( outline_10_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_120 );
    outline_10_var___qualname__ = tmp_assign_source_120;

    tmp_assign_source_121 = const_str_plain_BoxBlur;
    assert( outline_10_var_name == NULL );
    Py_INCREF( tmp_assign_source_121 );
    outline_10_var_name = tmp_assign_source_121;

    tmp_assign_source_122 = MAKE_FUNCTION_PIL$ImageFilter$$$function_13___init__(  );
    assert( outline_10_var___init__ == NULL );
    outline_10_var___init__ = tmp_assign_source_122;

    tmp_assign_source_123 = MAKE_FUNCTION_PIL$ImageFilter$$$function_14_filter(  );
    assert( outline_10_var_filter == NULL );
    outline_10_var_filter = tmp_assign_source_123;

    // Tried code:
    tmp_called_name_23 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_23 );
    tmp_args_name_22 = PyTuple_New( 3 );
    tmp_tuple_element_32 = const_str_plain_BoxBlur;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_32 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = locals_dict_11;
    Py_INCREF( tmp_tuple_element_32 );
    if ( outline_10_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___qualname__,
            outline_10_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    if ( outline_10_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___module__,
            outline_10_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    if ( outline_10_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___doc__,
            outline_10_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    if ( outline_10_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_name,
            outline_10_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    if ( outline_10_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain___init__,
            outline_10_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    if ( outline_10_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_32,
            const_str_plain_filter,
            outline_10_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_32,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_32,
                const_str_plain_filter
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
        Py_DECREF( tmp_args_name_22 );
        Py_DECREF( tmp_tuple_element_32 );

        exception_lineno = 163;

        goto try_except_handler_22;
    }
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_32 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 163;
    tmp_assign_source_124 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;

        goto try_except_handler_22;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_124;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    Py_XDECREF( outline_10_var___qualname__ );
    outline_10_var___qualname__ = NULL;

    Py_XDECREF( outline_10_var___module__ );
    outline_10_var___module__ = NULL;

    Py_XDECREF( outline_10_var___doc__ );
    outline_10_var___doc__ = NULL;

    Py_XDECREF( outline_10_var_name );
    outline_10_var_name = NULL;

    Py_XDECREF( outline_10_var___init__ );
    outline_10_var___init__ = NULL;

    Py_XDECREF( outline_10_var_filter );
    outline_10_var_filter = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_10_var___qualname__ );
    outline_10_var___qualname__ = NULL;

    Py_XDECREF( outline_10_var___module__ );
    outline_10_var___module__ = NULL;

    Py_XDECREF( outline_10_var___doc__ );
    outline_10_var___doc__ = NULL;

    Py_XDECREF( outline_10_var_name );
    outline_10_var_name = NULL;

    Py_XDECREF( outline_10_var___init__ );
    outline_10_var___init__ = NULL;

    Py_XDECREF( outline_10_var_filter );
    outline_10_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 163;
    goto try_except_handler_21;
    outline_result_11:;
    tmp_assign_source_117 = tmp_outline_return_value_11;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BoxBlur, tmp_assign_source_117 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_assign_source_125 = PyTuple_New( 1 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_MultibandFilter );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultibandFilter );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_125 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultibandFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;

        goto try_except_handler_23;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_125, 0, tmp_tuple_element_33 );
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_125;

    tmp_assign_source_126 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_126;

    tmp_compare_left_23 = const_str_plain_metaclass;
    tmp_compare_right_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    assert( !(tmp_cmp_In_23 == -1) );
    if ( tmp_cmp_In_23 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_12 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_cond_value_12 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_bases_name_12 );
    tmp_assign_source_127 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_12 );

        exception_lineno = 183;

        goto try_except_handler_23;
    }
    Py_DECREF( tmp_metaclass_name_12 );
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_127;

    tmp_compare_left_24 = const_str_plain_metaclass;
    tmp_compare_right_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_24 );
    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    assert( !(tmp_cmp_In_24 == -1) );
    if ( tmp_cmp_In_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    tmp_args_name_23 = PyTuple_New( 2 );
    tmp_tuple_element_34 = const_str_plain_UnsharpMask;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_34 );
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 183;
    tmp_assign_source_128 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_24 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_128 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_128;

    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_12);
    locals_dict_12 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_130 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_11_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_130 );
    outline_11_var___module__ = tmp_assign_source_130;

    tmp_assign_source_131 = const_str_digest_6035838ccdcd1553ac2e986b944be7a7;
    assert( outline_11_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_131 );
    outline_11_var___doc__ = tmp_assign_source_131;

    tmp_assign_source_132 = const_str_plain_UnsharpMask;
    assert( outline_11_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_132 );
    outline_11_var___qualname__ = tmp_assign_source_132;

    tmp_assign_source_133 = const_str_plain_UnsharpMask;
    assert( outline_11_var_name == NULL );
    Py_INCREF( tmp_assign_source_133 );
    outline_11_var_name = tmp_assign_source_133;

    tmp_defaults_7 = const_tuple_int_pos_2_int_pos_150_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_134 = MAKE_FUNCTION_PIL$ImageFilter$$$function_15___init__( tmp_defaults_7 );
    assert( outline_11_var___init__ == NULL );
    outline_11_var___init__ = tmp_assign_source_134;

    tmp_assign_source_135 = MAKE_FUNCTION_PIL$ImageFilter$$$function_16_filter(  );
    assert( outline_11_var_filter == NULL );
    outline_11_var_filter = tmp_assign_source_135;

    // Tried code:
    tmp_called_name_25 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_25 );
    tmp_args_name_24 = PyTuple_New( 3 );
    tmp_tuple_element_35 = const_str_plain_UnsharpMask;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_35 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_35 );
    tmp_tuple_element_35 = locals_dict_12;
    Py_INCREF( tmp_tuple_element_35 );
    if ( outline_11_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___qualname__,
            outline_11_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    if ( outline_11_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___module__,
            outline_11_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    if ( outline_11_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___doc__,
            outline_11_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    if ( outline_11_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain_name,
            outline_11_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    if ( outline_11_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain___init__,
            outline_11_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
                const_str_plain___init__
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    if ( outline_11_var_filter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_35,
            const_str_plain_filter,
            outline_11_var_filter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_35,
            const_str_plain_filter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_35,
                const_str_plain_filter
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
        Py_DECREF( tmp_args_name_24 );
        Py_DECREF( tmp_tuple_element_35 );

        exception_lineno = 183;

        goto try_except_handler_24;
    }
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_35 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 183;
    tmp_assign_source_136 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_24;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_136;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    Py_XDECREF( outline_11_var___qualname__ );
    outline_11_var___qualname__ = NULL;

    Py_XDECREF( outline_11_var___module__ );
    outline_11_var___module__ = NULL;

    Py_XDECREF( outline_11_var___doc__ );
    outline_11_var___doc__ = NULL;

    Py_XDECREF( outline_11_var_name );
    outline_11_var_name = NULL;

    Py_XDECREF( outline_11_var___init__ );
    outline_11_var___init__ = NULL;

    Py_XDECREF( outline_11_var_filter );
    outline_11_var_filter = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_11_var___qualname__ );
    outline_11_var___qualname__ = NULL;

    Py_XDECREF( outline_11_var___module__ );
    outline_11_var___module__ = NULL;

    Py_XDECREF( outline_11_var___doc__ );
    outline_11_var___doc__ = NULL;

    Py_XDECREF( outline_11_var_name );
    outline_11_var_name = NULL;

    Py_XDECREF( outline_11_var___init__ );
    outline_11_var___init__ = NULL;

    Py_XDECREF( outline_11_var_filter );
    outline_11_var_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 183;
    goto try_except_handler_23;
    outline_result_12:;
    tmp_assign_source_129 = tmp_outline_return_value_12;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_UnsharpMask, tmp_assign_source_129 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_assign_source_137 = PyTuple_New( 1 );
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_137 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;

        goto try_except_handler_25;
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_137, 0, tmp_tuple_element_36 );
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_137;

    tmp_assign_source_138 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_138;

    tmp_compare_left_25 = const_str_plain_metaclass;
    tmp_compare_right_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_25 );
    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    assert( !(tmp_cmp_In_25 == -1) );
    if ( tmp_cmp_In_25 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dict_name_13 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_cond_value_13 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_bases_name_13 );
    tmp_assign_source_139 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_13 );

        exception_lineno = 208;

        goto try_except_handler_25;
    }
    Py_DECREF( tmp_metaclass_name_13 );
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_139;

    tmp_compare_left_26 = const_str_plain_metaclass;
    tmp_compare_right_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_26 );
    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    assert( !(tmp_cmp_In_26 == -1) );
    if ( tmp_cmp_In_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    tmp_args_name_25 = PyTuple_New( 2 );
    tmp_tuple_element_37 = const_str_plain_BLUR;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_37 );
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 208;
    tmp_assign_source_140 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_25;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_140 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_140;

    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_13);
    locals_dict_13 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_142 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_12_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_142 );
    outline_12_var___module__ = tmp_assign_source_142;

    tmp_assign_source_143 = const_str_plain_BLUR;
    assert( outline_12_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_143 );
    outline_12_var___qualname__ = tmp_assign_source_143;

    tmp_assign_source_144 = const_str_plain_Blur;
    assert( outline_12_var_name == NULL );
    Py_INCREF( tmp_assign_source_144 );
    outline_12_var_name = tmp_assign_source_144;

    tmp_assign_source_145 = const_tuple_92b7d27d42c9d6e1edf0bdd1df8db135_tuple;
    assert( outline_12_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_145 );
    outline_12_var_filterargs = tmp_assign_source_145;

    // Tried code:
    tmp_called_name_27 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_27 );
    tmp_args_name_26 = PyTuple_New( 3 );
    tmp_tuple_element_38 = const_str_plain_BLUR;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_38 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = locals_dict_13;
    Py_INCREF( tmp_tuple_element_38 );
    if ( outline_12_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain___qualname__,
            outline_12_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 208;

        goto try_except_handler_26;
    }
    if ( outline_12_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain___module__,
            outline_12_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 208;

        goto try_except_handler_26;
    }
    if ( outline_12_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain_name,
            outline_12_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 208;

        goto try_except_handler_26;
    }
    if ( outline_12_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_38,
            const_str_plain_filterargs,
            outline_12_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_38,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_38,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_26 );
        Py_DECREF( tmp_tuple_element_38 );

        exception_lineno = 208;

        goto try_except_handler_26;
    }
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_38 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 208;
    tmp_assign_source_146 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_146 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_26;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_146;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    Py_XDECREF( outline_12_var___qualname__ );
    outline_12_var___qualname__ = NULL;

    Py_XDECREF( outline_12_var___module__ );
    outline_12_var___module__ = NULL;

    Py_XDECREF( outline_12_var_name );
    outline_12_var_name = NULL;

    Py_XDECREF( outline_12_var_filterargs );
    outline_12_var_filterargs = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_12_var___qualname__ );
    outline_12_var___qualname__ = NULL;

    Py_XDECREF( outline_12_var___module__ );
    outline_12_var___module__ = NULL;

    Py_XDECREF( outline_12_var_name );
    outline_12_var_name = NULL;

    Py_XDECREF( outline_12_var_filterargs );
    outline_12_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 208;
    goto try_except_handler_25;
    outline_result_13:;
    tmp_assign_source_141 = tmp_outline_return_value_13;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BLUR, tmp_assign_source_141 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_assign_source_147 = PyTuple_New( 1 );
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_147 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;

        goto try_except_handler_27;
    }

    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_147, 0, tmp_tuple_element_39 );
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_147;

    tmp_assign_source_148 = PyDict_New();
    assert( tmp_class_creation_14__class_decl_dict == NULL );
    tmp_class_creation_14__class_decl_dict = tmp_assign_source_148;

    tmp_compare_left_27 = const_str_plain_metaclass;
    tmp_compare_right_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_27 );
    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    assert( !(tmp_cmp_In_27 == -1) );
    if ( tmp_cmp_In_27 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dict_name_14 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_cond_value_14 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_bases_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_bases_name_14 );
    tmp_assign_source_149 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_14 );

        exception_lineno = 219;

        goto try_except_handler_27;
    }
    Py_DECREF( tmp_metaclass_name_14 );
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_149;

    tmp_compare_left_28 = const_str_plain_metaclass;
    tmp_compare_right_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_28 );
    tmp_cmp_In_28 = PySequence_Contains( tmp_compare_right_28, tmp_compare_left_28 );
    assert( !(tmp_cmp_In_28 == -1) );
    if ( tmp_cmp_In_28 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    branch_no_14:;
    tmp_hasattr_source_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_14 );
    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    tmp_args_name_27 = PyTuple_New( 2 );
    tmp_tuple_element_40 = const_str_plain_CONTOUR;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_40 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_40 );
    tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_27 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 219;
    tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_27;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_150 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_class_creation_14__prepared == NULL );
    tmp_class_creation_14__prepared = tmp_assign_source_150;

    tmp_set_locals = tmp_class_creation_14__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_14);
    locals_dict_14 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_152 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_13_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_152 );
    outline_13_var___module__ = tmp_assign_source_152;

    tmp_assign_source_153 = const_str_plain_CONTOUR;
    assert( outline_13_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_153 );
    outline_13_var___qualname__ = tmp_assign_source_153;

    tmp_assign_source_154 = const_str_plain_Contour;
    assert( outline_13_var_name == NULL );
    Py_INCREF( tmp_assign_source_154 );
    outline_13_var_name = tmp_assign_source_154;

    tmp_assign_source_155 = const_tuple_af62739cfe355bb874b0d64e1fa86bd3_tuple;
    assert( outline_13_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_155 );
    outline_13_var_filterargs = tmp_assign_source_155;

    // Tried code:
    tmp_called_name_29 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_29 );
    tmp_args_name_28 = PyTuple_New( 3 );
    tmp_tuple_element_41 = const_str_plain_CONTOUR;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_41 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = locals_dict_14;
    Py_INCREF( tmp_tuple_element_41 );
    if ( outline_13_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain___qualname__,
            outline_13_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 219;

        goto try_except_handler_28;
    }
    if ( outline_13_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain___module__,
            outline_13_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 219;

        goto try_except_handler_28;
    }
    if ( outline_13_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain_name,
            outline_13_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 219;

        goto try_except_handler_28;
    }
    if ( outline_13_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_41,
            const_str_plain_filterargs,
            outline_13_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_41,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_41,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_28 );
        Py_DECREF( tmp_tuple_element_41 );

        exception_lineno = 219;

        goto try_except_handler_28;
    }
    PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_41 );
    tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_28 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 219;
    tmp_assign_source_156 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;

        goto try_except_handler_28;
    }
    assert( outline_13_var___class__ == NULL );
    outline_13_var___class__ = tmp_assign_source_156;

    tmp_outline_return_value_14 = outline_13_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_14 );
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_28;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_28:;
    CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
    Py_DECREF( outline_13_var___class__ );
    outline_13_var___class__ = NULL;

    Py_XDECREF( outline_13_var___qualname__ );
    outline_13_var___qualname__ = NULL;

    Py_XDECREF( outline_13_var___module__ );
    outline_13_var___module__ = NULL;

    Py_XDECREF( outline_13_var_name );
    outline_13_var_name = NULL;

    Py_XDECREF( outline_13_var_filterargs );
    outline_13_var_filterargs = NULL;

    goto outline_result_14;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_13_var___qualname__ );
    outline_13_var___qualname__ = NULL;

    Py_XDECREF( outline_13_var___module__ );
    outline_13_var___module__ = NULL;

    Py_XDECREF( outline_13_var_name );
    outline_13_var_name = NULL;

    Py_XDECREF( outline_13_var_filterargs );
    outline_13_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto outline_exception_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_14:;
    exception_lineno = 219;
    goto try_except_handler_27;
    outline_result_14:;
    tmp_assign_source_151 = tmp_outline_return_value_14;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_CONTOUR, tmp_assign_source_151 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_assign_source_157 = PyTuple_New( 1 );
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_157 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;

        goto try_except_handler_29;
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_assign_source_157, 0, tmp_tuple_element_42 );
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_157;

    tmp_assign_source_158 = PyDict_New();
    assert( tmp_class_creation_15__class_decl_dict == NULL );
    tmp_class_creation_15__class_decl_dict = tmp_assign_source_158;

    tmp_compare_left_29 = const_str_plain_metaclass;
    tmp_compare_right_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_29 );
    tmp_cmp_In_29 = PySequence_Contains( tmp_compare_right_29, tmp_compare_left_29 );
    assert( !(tmp_cmp_In_29 == -1) );
    if ( tmp_cmp_In_29 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dict_name_15 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_cond_value_15 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_metaclass_name_15 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_bases_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_bases_name_15 );
    tmp_assign_source_159 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_15 );

        exception_lineno = 228;

        goto try_except_handler_29;
    }
    Py_DECREF( tmp_metaclass_name_15 );
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_159;

    tmp_compare_left_30 = const_str_plain_metaclass;
    tmp_compare_right_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_30 );
    tmp_cmp_In_30 = PySequence_Contains( tmp_compare_right_30, tmp_compare_left_30 );
    assert( !(tmp_cmp_In_30 == -1) );
    if ( tmp_cmp_In_30 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    branch_no_15:;
    tmp_hasattr_source_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_15 );
    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    tmp_args_name_29 = PyTuple_New( 2 );
    tmp_tuple_element_43 = const_str_plain_DETAIL;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_43 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_43 );
    tmp_kw_name_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_29 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 228;
    tmp_assign_source_160 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_29, tmp_kw_name_29 );
    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_name_29 );
    if ( tmp_assign_source_160 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_29;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_160 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_class_creation_15__prepared == NULL );
    tmp_class_creation_15__prepared = tmp_assign_source_160;

    tmp_set_locals = tmp_class_creation_15__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_15);
    locals_dict_15 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_162 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_14_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_162 );
    outline_14_var___module__ = tmp_assign_source_162;

    tmp_assign_source_163 = const_str_plain_DETAIL;
    assert( outline_14_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_163 );
    outline_14_var___qualname__ = tmp_assign_source_163;

    tmp_assign_source_164 = const_str_plain_Detail;
    assert( outline_14_var_name == NULL );
    Py_INCREF( tmp_assign_source_164 );
    outline_14_var_name = tmp_assign_source_164;

    tmp_assign_source_165 = const_tuple_2fbe8f7d82421d40b5775b3a71318d59_tuple;
    assert( outline_14_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_165 );
    outline_14_var_filterargs = tmp_assign_source_165;

    // Tried code:
    tmp_called_name_31 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_31 );
    tmp_args_name_30 = PyTuple_New( 3 );
    tmp_tuple_element_44 = const_str_plain_DETAIL;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_44 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = locals_dict_15;
    Py_INCREF( tmp_tuple_element_44 );
    if ( outline_14_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain___qualname__,
            outline_14_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 228;

        goto try_except_handler_30;
    }
    if ( outline_14_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain___module__,
            outline_14_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 228;

        goto try_except_handler_30;
    }
    if ( outline_14_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain_name,
            outline_14_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 228;

        goto try_except_handler_30;
    }
    if ( outline_14_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_44,
            const_str_plain_filterargs,
            outline_14_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_44,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_44,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_30 );
        Py_DECREF( tmp_tuple_element_44 );

        exception_lineno = 228;

        goto try_except_handler_30;
    }
    PyTuple_SET_ITEM( tmp_args_name_30, 2, tmp_tuple_element_44 );
    tmp_kw_name_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_30 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 228;
    tmp_assign_source_166 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_30, tmp_kw_name_30 );
    Py_DECREF( tmp_args_name_30 );
    if ( tmp_assign_source_166 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_30;
    }
    assert( outline_14_var___class__ == NULL );
    outline_14_var___class__ = tmp_assign_source_166;

    tmp_outline_return_value_15 = outline_14_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_15 );
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    CHECK_OBJECT( (PyObject *)outline_14_var___class__ );
    Py_DECREF( outline_14_var___class__ );
    outline_14_var___class__ = NULL;

    Py_XDECREF( outline_14_var___qualname__ );
    outline_14_var___qualname__ = NULL;

    Py_XDECREF( outline_14_var___module__ );
    outline_14_var___module__ = NULL;

    Py_XDECREF( outline_14_var_name );
    outline_14_var_name = NULL;

    Py_XDECREF( outline_14_var_filterargs );
    outline_14_var_filterargs = NULL;

    goto outline_result_15;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_14_var___qualname__ );
    outline_14_var___qualname__ = NULL;

    Py_XDECREF( outline_14_var___module__ );
    outline_14_var___module__ = NULL;

    Py_XDECREF( outline_14_var_name );
    outline_14_var_name = NULL;

    Py_XDECREF( outline_14_var_filterargs );
    outline_14_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_15:;
    exception_lineno = 228;
    goto try_except_handler_29;
    outline_result_15:;
    tmp_assign_source_161 = tmp_outline_return_value_15;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_DETAIL, tmp_assign_source_161 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_assign_source_167 = PyTuple_New( 1 );
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_45 == NULL )
    {
        Py_DECREF( tmp_assign_source_167 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;

        goto try_except_handler_31;
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_assign_source_167, 0, tmp_tuple_element_45 );
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_167;

    tmp_assign_source_168 = PyDict_New();
    assert( tmp_class_creation_16__class_decl_dict == NULL );
    tmp_class_creation_16__class_decl_dict = tmp_assign_source_168;

    tmp_compare_left_31 = const_str_plain_metaclass;
    tmp_compare_right_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_31 );
    tmp_cmp_In_31 = PySequence_Contains( tmp_compare_right_31, tmp_compare_left_31 );
    assert( !(tmp_cmp_In_31 == -1) );
    if ( tmp_cmp_In_31 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dict_name_16 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_cond_value_16 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_metaclass_name_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_bases_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_bases_name_16 );
    tmp_assign_source_169 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
    if ( tmp_assign_source_169 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_16 );

        exception_lineno = 237;

        goto try_except_handler_31;
    }
    Py_DECREF( tmp_metaclass_name_16 );
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_169;

    tmp_compare_left_32 = const_str_plain_metaclass;
    tmp_compare_right_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_32 );
    tmp_cmp_In_32 = PySequence_Contains( tmp_compare_right_32, tmp_compare_left_32 );
    assert( !(tmp_cmp_In_32 == -1) );
    if ( tmp_cmp_In_32 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    branch_no_16:;
    tmp_hasattr_source_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_16 );
    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    tmp_args_name_31 = PyTuple_New( 2 );
    tmp_tuple_element_46 = const_str_plain_EDGE_ENHANCE;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_46 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 1, tmp_tuple_element_46 );
    tmp_kw_name_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_31 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 237;
    tmp_assign_source_170 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_31, tmp_kw_name_31 );
    Py_DECREF( tmp_called_name_32 );
    Py_DECREF( tmp_args_name_31 );
    if ( tmp_assign_source_170 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_31;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_170 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_class_creation_16__prepared == NULL );
    tmp_class_creation_16__prepared = tmp_assign_source_170;

    tmp_set_locals = tmp_class_creation_16__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_16);
    locals_dict_16 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_172 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_15_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_172 );
    outline_15_var___module__ = tmp_assign_source_172;

    tmp_assign_source_173 = const_str_plain_EDGE_ENHANCE;
    assert( outline_15_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_173 );
    outline_15_var___qualname__ = tmp_assign_source_173;

    tmp_assign_source_174 = const_str_digest_e749479ca4591258abaf0631a8cdf69c;
    assert( outline_15_var_name == NULL );
    Py_INCREF( tmp_assign_source_174 );
    outline_15_var_name = tmp_assign_source_174;

    tmp_assign_source_175 = const_tuple_6138090bb4631a56a96f8885085ea1e1_tuple;
    assert( outline_15_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_175 );
    outline_15_var_filterargs = tmp_assign_source_175;

    // Tried code:
    tmp_called_name_33 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_33 );
    tmp_args_name_32 = PyTuple_New( 3 );
    tmp_tuple_element_47 = const_str_plain_EDGE_ENHANCE;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_47 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 1, tmp_tuple_element_47 );
    tmp_tuple_element_47 = locals_dict_16;
    Py_INCREF( tmp_tuple_element_47 );
    if ( outline_15_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain___qualname__,
            outline_15_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 237;

        goto try_except_handler_32;
    }
    if ( outline_15_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain___module__,
            outline_15_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 237;

        goto try_except_handler_32;
    }
    if ( outline_15_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_name,
            outline_15_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 237;

        goto try_except_handler_32;
    }
    if ( outline_15_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_47,
            const_str_plain_filterargs,
            outline_15_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_47,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_47,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_32 );
        Py_DECREF( tmp_tuple_element_47 );

        exception_lineno = 237;

        goto try_except_handler_32;
    }
    PyTuple_SET_ITEM( tmp_args_name_32, 2, tmp_tuple_element_47 );
    tmp_kw_name_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_32 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 237;
    tmp_assign_source_176 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_32, tmp_kw_name_32 );
    Py_DECREF( tmp_args_name_32 );
    if ( tmp_assign_source_176 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_32;
    }
    assert( outline_15_var___class__ == NULL );
    outline_15_var___class__ = tmp_assign_source_176;

    tmp_outline_return_value_16 = outline_15_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_16 );
    Py_INCREF( tmp_outline_return_value_16 );
    goto try_return_handler_32;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_15_var___class__ );
    Py_DECREF( outline_15_var___class__ );
    outline_15_var___class__ = NULL;

    Py_XDECREF( outline_15_var___qualname__ );
    outline_15_var___qualname__ = NULL;

    Py_XDECREF( outline_15_var___module__ );
    outline_15_var___module__ = NULL;

    Py_XDECREF( outline_15_var_name );
    outline_15_var_name = NULL;

    Py_XDECREF( outline_15_var_filterargs );
    outline_15_var_filterargs = NULL;

    goto outline_result_16;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_15_var___qualname__ );
    outline_15_var___qualname__ = NULL;

    Py_XDECREF( outline_15_var___module__ );
    outline_15_var___module__ = NULL;

    Py_XDECREF( outline_15_var_name );
    outline_15_var_name = NULL;

    Py_XDECREF( outline_15_var_filterargs );
    outline_15_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto outline_exception_16;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_16:;
    exception_lineno = 237;
    goto try_except_handler_31;
    outline_result_16:;
    tmp_assign_source_171 = tmp_outline_return_value_16;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_EDGE_ENHANCE, tmp_assign_source_171 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_assign_source_177 = PyTuple_New( 1 );
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_177 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;

        goto try_except_handler_33;
    }

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_assign_source_177, 0, tmp_tuple_element_48 );
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_177;

    tmp_assign_source_178 = PyDict_New();
    assert( tmp_class_creation_17__class_decl_dict == NULL );
    tmp_class_creation_17__class_decl_dict = tmp_assign_source_178;

    tmp_compare_left_33 = const_str_plain_metaclass;
    tmp_compare_right_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_33 );
    tmp_cmp_In_33 = PySequence_Contains( tmp_compare_right_33, tmp_compare_left_33 );
    assert( !(tmp_cmp_In_33 == -1) );
    if ( tmp_cmp_In_33 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dict_name_17 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_cond_value_17 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_metaclass_name_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_bases_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_bases_name_17 );
    tmp_assign_source_179 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
    if ( tmp_assign_source_179 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_17 );

        exception_lineno = 246;

        goto try_except_handler_33;
    }
    Py_DECREF( tmp_metaclass_name_17 );
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_179;

    tmp_compare_left_34 = const_str_plain_metaclass;
    tmp_compare_right_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_34 );
    tmp_cmp_In_34 = PySequence_Contains( tmp_compare_right_34, tmp_compare_left_34 );
    assert( !(tmp_cmp_In_34 == -1) );
    if ( tmp_cmp_In_34 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    branch_no_17:;
    tmp_hasattr_source_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_17 );
    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    tmp_args_name_33 = PyTuple_New( 2 );
    tmp_tuple_element_49 = const_str_plain_EDGE_ENHANCE_MORE;
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_49 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 1, tmp_tuple_element_49 );
    tmp_kw_name_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_33 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 246;
    tmp_assign_source_180 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_33, tmp_kw_name_33 );
    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_name_33 );
    if ( tmp_assign_source_180 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_33;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_180 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_class_creation_17__prepared == NULL );
    tmp_class_creation_17__prepared = tmp_assign_source_180;

    tmp_set_locals = tmp_class_creation_17__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_17);
    locals_dict_17 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_182 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_16_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_182 );
    outline_16_var___module__ = tmp_assign_source_182;

    tmp_assign_source_183 = const_str_plain_EDGE_ENHANCE_MORE;
    assert( outline_16_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_183 );
    outline_16_var___qualname__ = tmp_assign_source_183;

    tmp_assign_source_184 = const_str_digest_bdf7b7c270cc9aaae166c2692fcee03b;
    assert( outline_16_var_name == NULL );
    Py_INCREF( tmp_assign_source_184 );
    outline_16_var_name = tmp_assign_source_184;

    tmp_assign_source_185 = const_tuple_a7195b1f80dd04b75072438f2f6e45c7_tuple;
    assert( outline_16_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_185 );
    outline_16_var_filterargs = tmp_assign_source_185;

    // Tried code:
    tmp_called_name_35 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_35 );
    tmp_args_name_34 = PyTuple_New( 3 );
    tmp_tuple_element_50 = const_str_plain_EDGE_ENHANCE_MORE;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_50 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 1, tmp_tuple_element_50 );
    tmp_tuple_element_50 = locals_dict_17;
    Py_INCREF( tmp_tuple_element_50 );
    if ( outline_16_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain___qualname__,
            outline_16_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 246;

        goto try_except_handler_34;
    }
    if ( outline_16_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain___module__,
            outline_16_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 246;

        goto try_except_handler_34;
    }
    if ( outline_16_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_name,
            outline_16_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 246;

        goto try_except_handler_34;
    }
    if ( outline_16_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_50,
            const_str_plain_filterargs,
            outline_16_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_50,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_50,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_34 );
        Py_DECREF( tmp_tuple_element_50 );

        exception_lineno = 246;

        goto try_except_handler_34;
    }
    PyTuple_SET_ITEM( tmp_args_name_34, 2, tmp_tuple_element_50 );
    tmp_kw_name_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_34 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 246;
    tmp_assign_source_186 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_34, tmp_kw_name_34 );
    Py_DECREF( tmp_args_name_34 );
    if ( tmp_assign_source_186 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_34;
    }
    assert( outline_16_var___class__ == NULL );
    outline_16_var___class__ = tmp_assign_source_186;

    tmp_outline_return_value_17 = outline_16_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_17 );
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    CHECK_OBJECT( (PyObject *)outline_16_var___class__ );
    Py_DECREF( outline_16_var___class__ );
    outline_16_var___class__ = NULL;

    Py_XDECREF( outline_16_var___qualname__ );
    outline_16_var___qualname__ = NULL;

    Py_XDECREF( outline_16_var___module__ );
    outline_16_var___module__ = NULL;

    Py_XDECREF( outline_16_var_name );
    outline_16_var_name = NULL;

    Py_XDECREF( outline_16_var_filterargs );
    outline_16_var_filterargs = NULL;

    goto outline_result_17;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_16_var___qualname__ );
    outline_16_var___qualname__ = NULL;

    Py_XDECREF( outline_16_var___module__ );
    outline_16_var___module__ = NULL;

    Py_XDECREF( outline_16_var_name );
    outline_16_var_name = NULL;

    Py_XDECREF( outline_16_var_filterargs );
    outline_16_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto outline_exception_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_17:;
    exception_lineno = 246;
    goto try_except_handler_33;
    outline_result_17:;
    tmp_assign_source_181 = tmp_outline_return_value_17;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_EDGE_ENHANCE_MORE, tmp_assign_source_181 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_assign_source_187 = PyTuple_New( 1 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_187 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;

        goto try_except_handler_35;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_187, 0, tmp_tuple_element_51 );
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_187;

    tmp_assign_source_188 = PyDict_New();
    assert( tmp_class_creation_18__class_decl_dict == NULL );
    tmp_class_creation_18__class_decl_dict = tmp_assign_source_188;

    tmp_compare_left_35 = const_str_plain_metaclass;
    tmp_compare_right_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_35 );
    tmp_cmp_In_35 = PySequence_Contains( tmp_compare_right_35, tmp_compare_left_35 );
    assert( !(tmp_cmp_In_35 == -1) );
    if ( tmp_cmp_In_35 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dict_name_18 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_cond_value_18 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_metaclass_name_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_bases_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_bases_name_18 );
    tmp_assign_source_189 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
    if ( tmp_assign_source_189 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_18 );

        exception_lineno = 255;

        goto try_except_handler_35;
    }
    Py_DECREF( tmp_metaclass_name_18 );
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_189;

    tmp_compare_left_36 = const_str_plain_metaclass;
    tmp_compare_right_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_36 );
    tmp_cmp_In_36 = PySequence_Contains( tmp_compare_right_36, tmp_compare_left_36 );
    assert( !(tmp_cmp_In_36 == -1) );
    if ( tmp_cmp_In_36 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    branch_no_18:;
    tmp_hasattr_source_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_18 );
    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    tmp_args_name_35 = PyTuple_New( 2 );
    tmp_tuple_element_52 = const_str_plain_EMBOSS;
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_52 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 1, tmp_tuple_element_52 );
    tmp_kw_name_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_35 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 255;
    tmp_assign_source_190 = CALL_FUNCTION( tmp_called_name_36, tmp_args_name_35, tmp_kw_name_35 );
    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_name_35 );
    if ( tmp_assign_source_190 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_35;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_190 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_class_creation_18__prepared == NULL );
    tmp_class_creation_18__prepared = tmp_assign_source_190;

    tmp_set_locals = tmp_class_creation_18__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_18);
    locals_dict_18 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_192 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_17_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_192 );
    outline_17_var___module__ = tmp_assign_source_192;

    tmp_assign_source_193 = const_str_plain_EMBOSS;
    assert( outline_17_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_193 );
    outline_17_var___qualname__ = tmp_assign_source_193;

    tmp_assign_source_194 = const_str_plain_Emboss;
    assert( outline_17_var_name == NULL );
    Py_INCREF( tmp_assign_source_194 );
    outline_17_var_name = tmp_assign_source_194;

    tmp_assign_source_195 = const_tuple_47caae1f57ffb2023780891e9eb87d19_tuple;
    assert( outline_17_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_195 );
    outline_17_var_filterargs = tmp_assign_source_195;

    // Tried code:
    tmp_called_name_37 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_37 );
    tmp_args_name_36 = PyTuple_New( 3 );
    tmp_tuple_element_53 = const_str_plain_EMBOSS;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_53 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 1, tmp_tuple_element_53 );
    tmp_tuple_element_53 = locals_dict_18;
    Py_INCREF( tmp_tuple_element_53 );
    if ( outline_17_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain___qualname__,
            outline_17_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 255;

        goto try_except_handler_36;
    }
    if ( outline_17_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain___module__,
            outline_17_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 255;

        goto try_except_handler_36;
    }
    if ( outline_17_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain_name,
            outline_17_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 255;

        goto try_except_handler_36;
    }
    if ( outline_17_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_53,
            const_str_plain_filterargs,
            outline_17_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_53,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_53,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_36 );
        Py_DECREF( tmp_tuple_element_53 );

        exception_lineno = 255;

        goto try_except_handler_36;
    }
    PyTuple_SET_ITEM( tmp_args_name_36, 2, tmp_tuple_element_53 );
    tmp_kw_name_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_36 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 255;
    tmp_assign_source_196 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_36, tmp_kw_name_36 );
    Py_DECREF( tmp_args_name_36 );
    if ( tmp_assign_source_196 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;

        goto try_except_handler_36;
    }
    assert( outline_17_var___class__ == NULL );
    outline_17_var___class__ = tmp_assign_source_196;

    tmp_outline_return_value_18 = outline_17_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_18 );
    Py_INCREF( tmp_outline_return_value_18 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    CHECK_OBJECT( (PyObject *)outline_17_var___class__ );
    Py_DECREF( outline_17_var___class__ );
    outline_17_var___class__ = NULL;

    Py_XDECREF( outline_17_var___qualname__ );
    outline_17_var___qualname__ = NULL;

    Py_XDECREF( outline_17_var___module__ );
    outline_17_var___module__ = NULL;

    Py_XDECREF( outline_17_var_name );
    outline_17_var_name = NULL;

    Py_XDECREF( outline_17_var_filterargs );
    outline_17_var_filterargs = NULL;

    goto outline_result_18;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_17_var___qualname__ );
    outline_17_var___qualname__ = NULL;

    Py_XDECREF( outline_17_var___module__ );
    outline_17_var___module__ = NULL;

    Py_XDECREF( outline_17_var_name );
    outline_17_var_name = NULL;

    Py_XDECREF( outline_17_var_filterargs );
    outline_17_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_18;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_18:;
    exception_lineno = 255;
    goto try_except_handler_35;
    outline_result_18:;
    tmp_assign_source_191 = tmp_outline_return_value_18;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_EMBOSS, tmp_assign_source_191 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_assign_source_197 = PyTuple_New( 1 );
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_54 == NULL )
    {
        Py_DECREF( tmp_assign_source_197 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;

        goto try_except_handler_37;
    }

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_assign_source_197, 0, tmp_tuple_element_54 );
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_197;

    tmp_assign_source_198 = PyDict_New();
    assert( tmp_class_creation_19__class_decl_dict == NULL );
    tmp_class_creation_19__class_decl_dict = tmp_assign_source_198;

    tmp_compare_left_37 = const_str_plain_metaclass;
    tmp_compare_right_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_37 );
    tmp_cmp_In_37 = PySequence_Contains( tmp_compare_right_37, tmp_compare_left_37 );
    assert( !(tmp_cmp_In_37 == -1) );
    if ( tmp_cmp_In_37 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dict_name_19 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_cond_value_19 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_metaclass_name_19 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_bases_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_bases_name_19 );
    tmp_assign_source_199 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
    if ( tmp_assign_source_199 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_19 );

        exception_lineno = 264;

        goto try_except_handler_37;
    }
    Py_DECREF( tmp_metaclass_name_19 );
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_199;

    tmp_compare_left_38 = const_str_plain_metaclass;
    tmp_compare_right_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_38 );
    tmp_cmp_In_38 = PySequence_Contains( tmp_compare_right_38, tmp_compare_left_38 );
    assert( !(tmp_cmp_In_38 == -1) );
    if ( tmp_cmp_In_38 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    branch_no_19:;
    tmp_hasattr_source_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_19 );
    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    tmp_args_name_37 = PyTuple_New( 2 );
    tmp_tuple_element_55 = const_str_plain_FIND_EDGES;
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_55 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 1, tmp_tuple_element_55 );
    tmp_kw_name_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_37 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 264;
    tmp_assign_source_200 = CALL_FUNCTION( tmp_called_name_38, tmp_args_name_37, tmp_kw_name_37 );
    Py_DECREF( tmp_called_name_38 );
    Py_DECREF( tmp_args_name_37 );
    if ( tmp_assign_source_200 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_37;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_200 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_class_creation_19__prepared == NULL );
    tmp_class_creation_19__prepared = tmp_assign_source_200;

    tmp_set_locals = tmp_class_creation_19__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_19);
    locals_dict_19 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_202 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_18_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_202 );
    outline_18_var___module__ = tmp_assign_source_202;

    tmp_assign_source_203 = const_str_plain_FIND_EDGES;
    assert( outline_18_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_203 );
    outline_18_var___qualname__ = tmp_assign_source_203;

    tmp_assign_source_204 = const_str_digest_e68099e6f7452c9074c97a4e07393094;
    assert( outline_18_var_name == NULL );
    Py_INCREF( tmp_assign_source_204 );
    outline_18_var_name = tmp_assign_source_204;

    tmp_assign_source_205 = const_tuple_3ade3b84924198dad5e0bc3568ee92df_tuple;
    assert( outline_18_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_205 );
    outline_18_var_filterargs = tmp_assign_source_205;

    // Tried code:
    tmp_called_name_39 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_39 );
    tmp_args_name_38 = PyTuple_New( 3 );
    tmp_tuple_element_56 = const_str_plain_FIND_EDGES;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_56 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 1, tmp_tuple_element_56 );
    tmp_tuple_element_56 = locals_dict_19;
    Py_INCREF( tmp_tuple_element_56 );
    if ( outline_18_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain___qualname__,
            outline_18_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    if ( outline_18_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain___module__,
            outline_18_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    if ( outline_18_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain_name,
            outline_18_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    if ( outline_18_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_56,
            const_str_plain_filterargs,
            outline_18_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_56,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_56,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_38 );
        Py_DECREF( tmp_tuple_element_56 );

        exception_lineno = 264;

        goto try_except_handler_38;
    }
    PyTuple_SET_ITEM( tmp_args_name_38, 2, tmp_tuple_element_56 );
    tmp_kw_name_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_38 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 264;
    tmp_assign_source_206 = CALL_FUNCTION( tmp_called_name_39, tmp_args_name_38, tmp_kw_name_38 );
    Py_DECREF( tmp_args_name_38 );
    if ( tmp_assign_source_206 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;

        goto try_except_handler_38;
    }
    assert( outline_18_var___class__ == NULL );
    outline_18_var___class__ = tmp_assign_source_206;

    tmp_outline_return_value_19 = outline_18_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_19 );
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_38;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_18_var___class__ );
    Py_DECREF( outline_18_var___class__ );
    outline_18_var___class__ = NULL;

    Py_XDECREF( outline_18_var___qualname__ );
    outline_18_var___qualname__ = NULL;

    Py_XDECREF( outline_18_var___module__ );
    outline_18_var___module__ = NULL;

    Py_XDECREF( outline_18_var_name );
    outline_18_var_name = NULL;

    Py_XDECREF( outline_18_var_filterargs );
    outline_18_var_filterargs = NULL;

    goto outline_result_19;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_18_var___qualname__ );
    outline_18_var___qualname__ = NULL;

    Py_XDECREF( outline_18_var___module__ );
    outline_18_var___module__ = NULL;

    Py_XDECREF( outline_18_var_name );
    outline_18_var_name = NULL;

    Py_XDECREF( outline_18_var_filterargs );
    outline_18_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto outline_exception_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_19:;
    exception_lineno = 264;
    goto try_except_handler_37;
    outline_result_19:;
    tmp_assign_source_201 = tmp_outline_return_value_19;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_FIND_EDGES, tmp_assign_source_201 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Tried code:
    tmp_assign_source_207 = PyTuple_New( 1 );
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_57 == NULL )
    {
        Py_DECREF( tmp_assign_source_207 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;

        goto try_except_handler_39;
    }

    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_207, 0, tmp_tuple_element_57 );
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_207;

    tmp_assign_source_208 = PyDict_New();
    assert( tmp_class_creation_20__class_decl_dict == NULL );
    tmp_class_creation_20__class_decl_dict = tmp_assign_source_208;

    tmp_compare_left_39 = const_str_plain_metaclass;
    tmp_compare_right_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_39 );
    tmp_cmp_In_39 = PySequence_Contains( tmp_compare_right_39, tmp_compare_left_39 );
    assert( !(tmp_cmp_In_39 == -1) );
    if ( tmp_cmp_In_39 == 1 )
    {
        goto condexpr_true_58;
    }
    else
    {
        goto condexpr_false_58;
    }
    condexpr_true_58:;
    tmp_dict_name_20 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    goto condexpr_end_58;
    condexpr_false_58:;
    tmp_cond_value_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_cond_value_20 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_59;
    }
    else
    {
        goto condexpr_false_59;
    }
    condexpr_true_59:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_type_arg_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_type_arg_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_20 );
    Py_DECREF( tmp_type_arg_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    goto condexpr_end_59;
    condexpr_false_59:;
    tmp_metaclass_name_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_20 );
    condexpr_end_59:;
    condexpr_end_58:;
    tmp_bases_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_bases_name_20 );
    tmp_assign_source_209 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
    if ( tmp_assign_source_209 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_20 );

        exception_lineno = 273;

        goto try_except_handler_39;
    }
    Py_DECREF( tmp_metaclass_name_20 );
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_209;

    tmp_compare_left_40 = const_str_plain_metaclass;
    tmp_compare_right_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_40 );
    tmp_cmp_In_40 = PySequence_Contains( tmp_compare_right_40, tmp_compare_left_40 );
    assert( !(tmp_cmp_In_40 == -1) );
    if ( tmp_cmp_In_40 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    branch_no_20:;
    tmp_hasattr_source_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_20 );
    tmp_hasattr_attr_20 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_20, tmp_hasattr_attr_20 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_60;
    }
    else
    {
        goto condexpr_false_60;
    }
    condexpr_true_60:;
    tmp_source_name_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___prepare__ );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    tmp_args_name_39 = PyTuple_New( 2 );
    tmp_tuple_element_58 = const_str_plain_SMOOTH;
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_58 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 1, tmp_tuple_element_58 );
    tmp_kw_name_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_39 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 273;
    tmp_assign_source_210 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_39, tmp_kw_name_39 );
    Py_DECREF( tmp_called_name_40 );
    Py_DECREF( tmp_args_name_39 );
    if ( tmp_assign_source_210 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_39;
    }
    goto condexpr_end_60;
    condexpr_false_60:;
    tmp_assign_source_210 = PyDict_New();
    condexpr_end_60:;
    assert( tmp_class_creation_20__prepared == NULL );
    tmp_class_creation_20__prepared = tmp_assign_source_210;

    tmp_set_locals = tmp_class_creation_20__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_20);
    locals_dict_20 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_212 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_19_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_212 );
    outline_19_var___module__ = tmp_assign_source_212;

    tmp_assign_source_213 = const_str_plain_SMOOTH;
    assert( outline_19_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_213 );
    outline_19_var___qualname__ = tmp_assign_source_213;

    tmp_assign_source_214 = const_str_plain_Smooth;
    assert( outline_19_var_name == NULL );
    Py_INCREF( tmp_assign_source_214 );
    outline_19_var_name = tmp_assign_source_214;

    tmp_assign_source_215 = const_tuple_33b6a390a515ed3d519d6a4e6fbf7560_tuple;
    assert( outline_19_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_215 );
    outline_19_var_filterargs = tmp_assign_source_215;

    // Tried code:
    tmp_called_name_41 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_41 );
    tmp_args_name_40 = PyTuple_New( 3 );
    tmp_tuple_element_59 = const_str_plain_SMOOTH;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_59 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 1, tmp_tuple_element_59 );
    tmp_tuple_element_59 = locals_dict_20;
    Py_INCREF( tmp_tuple_element_59 );
    if ( outline_19_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain___qualname__,
            outline_19_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 273;

        goto try_except_handler_40;
    }
    if ( outline_19_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain___module__,
            outline_19_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 273;

        goto try_except_handler_40;
    }
    if ( outline_19_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain_name,
            outline_19_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 273;

        goto try_except_handler_40;
    }
    if ( outline_19_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_59,
            const_str_plain_filterargs,
            outline_19_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_59,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_59,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_40 );
        Py_DECREF( tmp_tuple_element_59 );

        exception_lineno = 273;

        goto try_except_handler_40;
    }
    PyTuple_SET_ITEM( tmp_args_name_40, 2, tmp_tuple_element_59 );
    tmp_kw_name_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_40 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 273;
    tmp_assign_source_216 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_40, tmp_kw_name_40 );
    Py_DECREF( tmp_args_name_40 );
    if ( tmp_assign_source_216 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;

        goto try_except_handler_40;
    }
    assert( outline_19_var___class__ == NULL );
    outline_19_var___class__ = tmp_assign_source_216;

    tmp_outline_return_value_20 = outline_19_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_20 );
    Py_INCREF( tmp_outline_return_value_20 );
    goto try_return_handler_40;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_40:;
    CHECK_OBJECT( (PyObject *)outline_19_var___class__ );
    Py_DECREF( outline_19_var___class__ );
    outline_19_var___class__ = NULL;

    Py_XDECREF( outline_19_var___qualname__ );
    outline_19_var___qualname__ = NULL;

    Py_XDECREF( outline_19_var___module__ );
    outline_19_var___module__ = NULL;

    Py_XDECREF( outline_19_var_name );
    outline_19_var_name = NULL;

    Py_XDECREF( outline_19_var_filterargs );
    outline_19_var_filterargs = NULL;

    goto outline_result_20;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_19_var___qualname__ );
    outline_19_var___qualname__ = NULL;

    Py_XDECREF( outline_19_var___module__ );
    outline_19_var___module__ = NULL;

    Py_XDECREF( outline_19_var_name );
    outline_19_var_name = NULL;

    Py_XDECREF( outline_19_var_filterargs );
    outline_19_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto outline_exception_20;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_20:;
    exception_lineno = 273;
    goto try_except_handler_39;
    outline_result_20:;
    tmp_assign_source_211 = tmp_outline_return_value_20;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_SMOOTH, tmp_assign_source_211 );
    goto try_end_20;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Tried code:
    tmp_assign_source_217 = PyTuple_New( 1 );
    tmp_tuple_element_60 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_60 == NULL ))
    {
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_60 == NULL )
    {
        Py_DECREF( tmp_assign_source_217 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;

        goto try_except_handler_41;
    }

    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_assign_source_217, 0, tmp_tuple_element_60 );
    assert( tmp_class_creation_21__bases == NULL );
    tmp_class_creation_21__bases = tmp_assign_source_217;

    tmp_assign_source_218 = PyDict_New();
    assert( tmp_class_creation_21__class_decl_dict == NULL );
    tmp_class_creation_21__class_decl_dict = tmp_assign_source_218;

    tmp_compare_left_41 = const_str_plain_metaclass;
    tmp_compare_right_41 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_41 );
    tmp_cmp_In_41 = PySequence_Contains( tmp_compare_right_41, tmp_compare_left_41 );
    assert( !(tmp_cmp_In_41 == -1) );
    if ( tmp_cmp_In_41 == 1 )
    {
        goto condexpr_true_61;
    }
    else
    {
        goto condexpr_false_61;
    }
    condexpr_true_61:;
    tmp_dict_name_21 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_metaclass_name_21 = DICT_GET_ITEM( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    goto condexpr_end_61;
    condexpr_false_61:;
    tmp_cond_value_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_cond_value_21 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto condexpr_true_62;
    }
    else
    {
        goto condexpr_false_62;
    }
    condexpr_true_62:;
    tmp_subscribed_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_subscribed_name_21 );
    tmp_subscript_name_21 = const_int_0;
    tmp_type_arg_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_type_arg_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    tmp_metaclass_name_21 = BUILTIN_TYPE1( tmp_type_arg_21 );
    Py_DECREF( tmp_type_arg_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    goto condexpr_end_62;
    condexpr_false_62:;
    tmp_metaclass_name_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_21 );
    condexpr_end_62:;
    condexpr_end_61:;
    tmp_bases_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_bases_name_21 );
    tmp_assign_source_219 = SELECT_METACLASS( tmp_metaclass_name_21, tmp_bases_name_21 );
    if ( tmp_assign_source_219 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_21 );

        exception_lineno = 282;

        goto try_except_handler_41;
    }
    Py_DECREF( tmp_metaclass_name_21 );
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_219;

    tmp_compare_left_42 = const_str_plain_metaclass;
    tmp_compare_right_42 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_42 );
    tmp_cmp_In_42 = PySequence_Contains( tmp_compare_right_42, tmp_compare_left_42 );
    assert( !(tmp_cmp_In_42 == -1) );
    if ( tmp_cmp_In_42 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_dictdel_dict = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    branch_no_21:;
    tmp_hasattr_source_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_21 );
    tmp_hasattr_attr_21 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_21, tmp_hasattr_attr_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_63;
    }
    else
    {
        goto condexpr_false_63;
    }
    condexpr_true_63:;
    tmp_source_name_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    tmp_args_name_41 = PyTuple_New( 2 );
    tmp_tuple_element_61 = const_str_plain_SMOOTH_MORE;
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_61 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 1, tmp_tuple_element_61 );
    tmp_kw_name_41 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_41 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 282;
    tmp_assign_source_220 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_41, tmp_kw_name_41 );
    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_args_name_41 );
    if ( tmp_assign_source_220 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_41;
    }
    goto condexpr_end_63;
    condexpr_false_63:;
    tmp_assign_source_220 = PyDict_New();
    condexpr_end_63:;
    assert( tmp_class_creation_21__prepared == NULL );
    tmp_class_creation_21__prepared = tmp_assign_source_220;

    tmp_set_locals = tmp_class_creation_21__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_21);
    locals_dict_21 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_222 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_20_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_222 );
    outline_20_var___module__ = tmp_assign_source_222;

    tmp_assign_source_223 = const_str_plain_SMOOTH_MORE;
    assert( outline_20_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_223 );
    outline_20_var___qualname__ = tmp_assign_source_223;

    tmp_assign_source_224 = const_str_digest_12d9cad19106401652c949f7d99360ec;
    assert( outline_20_var_name == NULL );
    Py_INCREF( tmp_assign_source_224 );
    outline_20_var_name = tmp_assign_source_224;

    tmp_assign_source_225 = const_tuple_d84b88ab4836b0cc4311549e35293e2e_tuple;
    assert( outline_20_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_225 );
    outline_20_var_filterargs = tmp_assign_source_225;

    // Tried code:
    tmp_called_name_43 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_43 );
    tmp_args_name_42 = PyTuple_New( 3 );
    tmp_tuple_element_62 = const_str_plain_SMOOTH_MORE;
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 0, tmp_tuple_element_62 );
    tmp_tuple_element_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_62 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 1, tmp_tuple_element_62 );
    tmp_tuple_element_62 = locals_dict_21;
    Py_INCREF( tmp_tuple_element_62 );
    if ( outline_20_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_62,
            const_str_plain___qualname__,
            outline_20_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_62,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_62,
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
        Py_DECREF( tmp_args_name_42 );
        Py_DECREF( tmp_tuple_element_62 );

        exception_lineno = 282;

        goto try_except_handler_42;
    }
    if ( outline_20_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_62,
            const_str_plain___module__,
            outline_20_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_62,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_62,
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
        Py_DECREF( tmp_args_name_42 );
        Py_DECREF( tmp_tuple_element_62 );

        exception_lineno = 282;

        goto try_except_handler_42;
    }
    if ( outline_20_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_62,
            const_str_plain_name,
            outline_20_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_62,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_62,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_42 );
        Py_DECREF( tmp_tuple_element_62 );

        exception_lineno = 282;

        goto try_except_handler_42;
    }
    if ( outline_20_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_62,
            const_str_plain_filterargs,
            outline_20_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_62,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_62,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_42 );
        Py_DECREF( tmp_tuple_element_62 );

        exception_lineno = 282;

        goto try_except_handler_42;
    }
    PyTuple_SET_ITEM( tmp_args_name_42, 2, tmp_tuple_element_62 );
    tmp_kw_name_42 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_42 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 282;
    tmp_assign_source_226 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_42, tmp_kw_name_42 );
    Py_DECREF( tmp_args_name_42 );
    if ( tmp_assign_source_226 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;

        goto try_except_handler_42;
    }
    assert( outline_20_var___class__ == NULL );
    outline_20_var___class__ = tmp_assign_source_226;

    tmp_outline_return_value_21 = outline_20_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_21 );
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    CHECK_OBJECT( (PyObject *)outline_20_var___class__ );
    Py_DECREF( outline_20_var___class__ );
    outline_20_var___class__ = NULL;

    Py_XDECREF( outline_20_var___qualname__ );
    outline_20_var___qualname__ = NULL;

    Py_XDECREF( outline_20_var___module__ );
    outline_20_var___module__ = NULL;

    Py_XDECREF( outline_20_var_name );
    outline_20_var_name = NULL;

    Py_XDECREF( outline_20_var_filterargs );
    outline_20_var_filterargs = NULL;

    goto outline_result_21;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_20_var___qualname__ );
    outline_20_var___qualname__ = NULL;

    Py_XDECREF( outline_20_var___module__ );
    outline_20_var___module__ = NULL;

    Py_XDECREF( outline_20_var_name );
    outline_20_var_name = NULL;

    Py_XDECREF( outline_20_var_filterargs );
    outline_20_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto outline_exception_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_21:;
    exception_lineno = 282;
    goto try_except_handler_41;
    outline_result_21:;
    tmp_assign_source_221 = tmp_outline_return_value_21;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_SMOOTH_MORE, tmp_assign_source_221 );
    goto try_end_21;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Tried code:
    tmp_assign_source_227 = PyTuple_New( 1 );
    tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );

    if (unlikely( tmp_tuple_element_63 == NULL ))
    {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BuiltinFilter );
    }

    if ( tmp_tuple_element_63 == NULL )
    {
        Py_DECREF( tmp_assign_source_227 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BuiltinFilter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;

        goto try_except_handler_43;
    }

    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_assign_source_227, 0, tmp_tuple_element_63 );
    assert( tmp_class_creation_22__bases == NULL );
    tmp_class_creation_22__bases = tmp_assign_source_227;

    tmp_assign_source_228 = PyDict_New();
    assert( tmp_class_creation_22__class_decl_dict == NULL );
    tmp_class_creation_22__class_decl_dict = tmp_assign_source_228;

    tmp_compare_left_43 = const_str_plain_metaclass;
    tmp_compare_right_43 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_43 );
    tmp_cmp_In_43 = PySequence_Contains( tmp_compare_right_43, tmp_compare_left_43 );
    assert( !(tmp_cmp_In_43 == -1) );
    if ( tmp_cmp_In_43 == 1 )
    {
        goto condexpr_true_64;
    }
    else
    {
        goto condexpr_false_64;
    }
    condexpr_true_64:;
    tmp_dict_name_22 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_metaclass_name_22 = DICT_GET_ITEM( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    goto condexpr_end_64;
    condexpr_false_64:;
    tmp_cond_value_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_cond_value_22 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto condexpr_true_65;
    }
    else
    {
        goto condexpr_false_65;
    }
    condexpr_true_65:;
    tmp_subscribed_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_subscribed_name_22 );
    tmp_subscript_name_22 = const_int_0;
    tmp_type_arg_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_type_arg_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    tmp_metaclass_name_22 = BUILTIN_TYPE1( tmp_type_arg_22 );
    Py_DECREF( tmp_type_arg_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    goto condexpr_end_65;
    condexpr_false_65:;
    tmp_metaclass_name_22 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_22 );
    condexpr_end_65:;
    condexpr_end_64:;
    tmp_bases_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_bases_name_22 );
    tmp_assign_source_229 = SELECT_METACLASS( tmp_metaclass_name_22, tmp_bases_name_22 );
    if ( tmp_assign_source_229 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_22 );

        exception_lineno = 293;

        goto try_except_handler_43;
    }
    Py_DECREF( tmp_metaclass_name_22 );
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_229;

    tmp_compare_left_44 = const_str_plain_metaclass;
    tmp_compare_right_44 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_44 );
    tmp_cmp_In_44 = PySequence_Contains( tmp_compare_right_44, tmp_compare_left_44 );
    assert( !(tmp_cmp_In_44 == -1) );
    if ( tmp_cmp_In_44 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_dictdel_dict = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    branch_no_22:;
    tmp_hasattr_source_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_22 );
    tmp_hasattr_attr_22 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_22, tmp_hasattr_attr_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_66;
    }
    else
    {
        goto condexpr_false_66;
    }
    condexpr_true_66:;
    tmp_source_name_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    tmp_args_name_43 = PyTuple_New( 2 );
    tmp_tuple_element_64 = const_str_plain_SHARPEN;
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 0, tmp_tuple_element_64 );
    tmp_tuple_element_64 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_64 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 1, tmp_tuple_element_64 );
    tmp_kw_name_43 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_43 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 293;
    tmp_assign_source_230 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_43, tmp_kw_name_43 );
    Py_DECREF( tmp_called_name_44 );
    Py_DECREF( tmp_args_name_43 );
    if ( tmp_assign_source_230 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_43;
    }
    goto condexpr_end_66;
    condexpr_false_66:;
    tmp_assign_source_230 = PyDict_New();
    condexpr_end_66:;
    assert( tmp_class_creation_22__prepared == NULL );
    tmp_class_creation_22__prepared = tmp_assign_source_230;

    tmp_set_locals = tmp_class_creation_22__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_22);
    locals_dict_22 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_232 = const_str_digest_6cfc1b78ac358dd2a7a8b796dc8926b2;
    assert( outline_21_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_232 );
    outline_21_var___module__ = tmp_assign_source_232;

    tmp_assign_source_233 = const_str_plain_SHARPEN;
    assert( outline_21_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_233 );
    outline_21_var___qualname__ = tmp_assign_source_233;

    tmp_assign_source_234 = const_str_plain_Sharpen;
    assert( outline_21_var_name == NULL );
    Py_INCREF( tmp_assign_source_234 );
    outline_21_var_name = tmp_assign_source_234;

    tmp_assign_source_235 = const_tuple_d40f88e7c952e2e385fbd16e093a4650_tuple;
    assert( outline_21_var_filterargs == NULL );
    Py_INCREF( tmp_assign_source_235 );
    outline_21_var_filterargs = tmp_assign_source_235;

    // Tried code:
    tmp_called_name_45 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_45 );
    tmp_args_name_44 = PyTuple_New( 3 );
    tmp_tuple_element_65 = const_str_plain_SHARPEN;
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 0, tmp_tuple_element_65 );
    tmp_tuple_element_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_65 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 1, tmp_tuple_element_65 );
    tmp_tuple_element_65 = locals_dict_22;
    Py_INCREF( tmp_tuple_element_65 );
    if ( outline_21_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_65,
            const_str_plain___qualname__,
            outline_21_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_65,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_65,
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
        Py_DECREF( tmp_args_name_44 );
        Py_DECREF( tmp_tuple_element_65 );

        exception_lineno = 293;

        goto try_except_handler_44;
    }
    if ( outline_21_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_65,
            const_str_plain___module__,
            outline_21_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_65,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_65,
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
        Py_DECREF( tmp_args_name_44 );
        Py_DECREF( tmp_tuple_element_65 );

        exception_lineno = 293;

        goto try_except_handler_44;
    }
    if ( outline_21_var_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_65,
            const_str_plain_name,
            outline_21_var_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_65,
            const_str_plain_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_65,
                const_str_plain_name
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
        Py_DECREF( tmp_args_name_44 );
        Py_DECREF( tmp_tuple_element_65 );

        exception_lineno = 293;

        goto try_except_handler_44;
    }
    if ( outline_21_var_filterargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_65,
            const_str_plain_filterargs,
            outline_21_var_filterargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_65,
            const_str_plain_filterargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_65,
                const_str_plain_filterargs
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
        Py_DECREF( tmp_args_name_44 );
        Py_DECREF( tmp_tuple_element_65 );

        exception_lineno = 293;

        goto try_except_handler_44;
    }
    PyTuple_SET_ITEM( tmp_args_name_44, 2, tmp_tuple_element_65 );
    tmp_kw_name_44 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_44 );
    frame_d67d95c185380705e95193c1ecbd55a5->m_frame.f_lineno = 293;
    tmp_assign_source_236 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_44, tmp_kw_name_44 );
    Py_DECREF( tmp_args_name_44 );
    if ( tmp_assign_source_236 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;

        goto try_except_handler_44;
    }
    assert( outline_21_var___class__ == NULL );
    outline_21_var___class__ = tmp_assign_source_236;

    tmp_outline_return_value_22 = outline_21_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_22 );
    Py_INCREF( tmp_outline_return_value_22 );
    goto try_return_handler_44;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_44:;
    CHECK_OBJECT( (PyObject *)outline_21_var___class__ );
    Py_DECREF( outline_21_var___class__ );
    outline_21_var___class__ = NULL;

    Py_XDECREF( outline_21_var___qualname__ );
    outline_21_var___qualname__ = NULL;

    Py_XDECREF( outline_21_var___module__ );
    outline_21_var___module__ = NULL;

    Py_XDECREF( outline_21_var_name );
    outline_21_var_name = NULL;

    Py_XDECREF( outline_21_var_filterargs );
    outline_21_var_filterargs = NULL;

    goto outline_result_22;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_21_var___qualname__ );
    outline_21_var___qualname__ = NULL;

    Py_XDECREF( outline_21_var___module__ );
    outline_21_var___module__ = NULL;

    Py_XDECREF( outline_21_var_name );
    outline_21_var_name = NULL;

    Py_XDECREF( outline_21_var_filterargs );
    outline_21_var_filterargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto outline_exception_22;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( PIL$ImageFilter );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_22:;
    exception_lineno = 293;
    goto try_except_handler_43;
    outline_result_22:;
    tmp_assign_source_231 = tmp_outline_return_value_22;
    UPDATE_STRING_DICT1( moduledict_PIL$ImageFilter, (Nuitka_StringObject *)const_str_plain_SHARPEN, tmp_assign_source_231 );
    goto try_end_22;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d67d95c185380705e95193c1ecbd55a5 );
#endif
    popFrameStack();

    assertFrameObject( frame_d67d95c185380705e95193c1ecbd55a5 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d67d95c185380705e95193c1ecbd55a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d67d95c185380705e95193c1ecbd55a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d67d95c185380705e95193c1ecbd55a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d67d95c185380705e95193c1ecbd55a5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;


    return MOD_RETURN_VALUE( module_PIL$ImageFilter );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
