/*
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

#include "astro.h"

Moontab	moontab[] =
{
	{    0.127,	{0,0,0,6}},
	{   13.902,	{0,0,0,4}},
	{ 2369.912,	{0,0,0,2}},
	{    1.979,	{1,0,0,4}},
	{  191.953,	{1,0,0,2}},
	{22639.500,	{1,0,0,0}},
	{-4586.465,	{1,0,0,-2}},
	{  -38.428,	{1,0,0,-4}},
	{    -.393,	{1,0,0,-6}},
	{    -.289,	{0,1,0,4}},
	{  -24.420,	{0,1,0,2}},
	{ -668.146,	{0,1,0,0}},
	{ -165.145,	{0,1,0,-2}},
	{   -1.877,	{0,1,0,-4}},
	{    0.403,	{0,0,0,3}},
	{ -125.154,	{0,0,0,1}},
	{    0.213,	{2,0,0,4}},
	{   14.387,	{2,0,0,2}},
	{  769.016,	{2,0,0,0}},
	{ -211.656,	{2,0,0,-2}},
	{  -30.773,	{2,0,0,-4}},
	{    -.570,	{2,0,0,-6}},
	{   -2.921,	{1,1,0,2}},
	{ -109.673,	{1,1,0,0}},
	{ -205.962,	{1,1,0,-2}},
	{   -4.391,	{1,1,0,-4}},
	{    -.072,	{1,1,0,-6}},
	{    0.283,	{1,-1,0,4}},
	{   14.577,	{1,-1,0,2}},
	{  147.687,	{1,-1,0,0}},
	{   28.475,	{1,-1,0,-2}},
	{    0.636,	{1,-1,0,-4}},
	{    -.189,	{0,2,0,2}},
	{   -7.486,	{0,2,0,0}},
	{   -8.096,	{0,2,0,-2}},
	{    -.151,	{0,2,0,-4}},
	{    -.085,	{0,0,2,4}},
	{   -5.741,	{0,0,2,2}},
	{ -411.608,	{0,0,2,0}},
	{  -55.173,	{0,0,2,-2}},
	{   -8.466,	{1,0,0,1}},
	{   18.609,	{1,0,0,-1}},
	{    3.215,	{1,0,0,-3}},
	{    0.150,	{0,1,0,3}},
	{   18.023,	{0,1,0,1}},
	{    0.560,	{0,1,0,-1}},
	{    1.060,	{3,0,0,2}},
	{   36.124,	{3,0,0,0}},
	{  -13.193,	{3,0,0,-2}},
	{   -1.187,	{3,0,0,-4}},
	{    -.293,	{3,0,0,-6}},
	{    -.290,	{2,1,0,2}},
	{   -7.649,	{2,1,0,0}},
	{   -8.627,	{2,1,0,-2}},
	{   -2.740,	{2,1,0,-4}},
	{    -.091,	{2,1,0,-6}},
	{    1.181,	{2,-1,0,2}},
	{    9.703,	{2,-1,0,0}},
	{   -2.494,	{2,-1,0,-2}},
	{    0.360,	{2,-1,0,-4}},
	{   -1.167,	{1,2,0,0}},
	{   -7.412,	{1,2,0,-2}},
	{    -.311,	{1,2,0,-4}},
	{    0.757,	{1,-2,0,2}},
	{    2.580,	{1,-2,0,0}},
	{    2.533,	{1,-2,0,-2}},
	{    -.103,	{0,3,0,0}},
	{    -.344,	{0,3,0,-2}},
	{    -.992,	{1,0,2,2}},
	{  -45.099,	{1,0,2,0}},
	{    -.179,	{1,0,2,-2}},
	{    -.301,	{1,0,2,-4}},
	{   -6.382,	{1,0,-2,2}},
	{   39.528,	{1,0,-2,0}},
	{    9.366,	{1,0,-2,-2}},
	{    0.202,	{1,0,-2,-4}},
	{    0.415,	{0,1,2,0}},
	{   -2.152,	{0,1,2,-2}},
	{   -1.440,	{0,1,-2,2}},
	{    0.076,	{0,1,-2,0}},
	{    0.384,	{0,1,-2,-2}},
	{    -.586,	{2,0,0,1}},
	{    1.750,	{2,0,0,-1}},
	{    1.225,	{2,0,0,-3}},
	{    1.267,	{1,1,0,1}},
	{    0.137,	{1,1,0,-1}},
	{    0.233,	{1,1,0,-3}},
	{    -.122,	{1,-1,0,1}},
	{   -1.089,	{1,-1,0,-1}},
	{    -.276,	{1,-1,0,-3}},
	{    0.255,	{0,0,2,1}},
	{    0.584,	{0,0,2,-1}},
	{    0.254,	{0,0,2,-3}},
	{    0.070,	{4,0,0,2}},
	{    1.938,	{4,0,0,0}},
	{    -.952,	{4,0,0,-2}},
	{    -.551,	{3,1,0,0}},
	{    -.482,	{3,1,0,-2}},
	{    -.100,	{3,1,0,-4}},
	{    0.088,	{3,-1,0,2}},
	{    0.681,	{3,-1,0,0}},
	{    -.183,	{3,-1,0,-2}},
	{    -.297,	{2,2,0,-2}},
	{    -.161,	{2,2,0,-4}},
	{    0.197,	{2,-2,0,0}},
	{    0.254,	{2,-2,0,-2}},
	{    -.250,	{1,3,0,-2}},
	{    -.123,	{2,0,2,2}},
	{   -3.996,	{2,0,2,0}},
	{    0.557,	{2,0,2,-2}},
	{    -.459,	{2,0,-2,2}},
	{   -1.370,	{2,0,-2,0}},
	{    0.538,	{2,0,-2,-2}},
	{    0.173,	{2,0,-2,-4}},
	{    0.263,	{1,1,2,0}},
	{    0.083,	{1,1,-2,2}},
	{    -.083,	{1,1,-2,0}},
	{    0.426,	{1,1,-2,-2}},
	{    -.304,	{1,-1,2,0}},
	{    -.372,	{1,-1,-2,2}},
	{    0.083,	{1,-1,-2,0}},
	{    0.418,	{0,0,4,0}},
	{    0.074,	{0,0,4,-2}},
	{    0.130,	{3,0,0,-1}},
	{    0.092,	{2,1,0,1}},
	{    0.084,	{2,1,0,-3}},
	{    -.352,	{2,-1,0,-1}},
	{    0.113,	{5,0,0,0}},
	{    -.330,	{3,0,2,0}},
	{    0.090,	{1,0,4,0}},
	{    -.080,	{1,0,-4,0}},
	{        0,	{0,0,0,0}},

	{ -112.79,	{0,0,0,1}},
	{ 2373.36,	{0,0,0,2}},
	{   -4.01,	{0,0,0,3}},
	{   14.06,	{0,0,0,4}},
	{    6.98,	{1,0,0,4}},
	{  192.72,	{1,0,0,2}},
	{  -13.51,	{1,0,0,1}},
	{22609.07,	{1,0,0,0}},
	{    3.59,	{1,0,0,-1}},
	{-4578.13,	{1,0,0,-2}},
	{    5.44,	{1,0,0,-3}},
	{  -38.64,	{1,0,0,-4}},
	{   14.78,	{2,0,0,2}},
	{  767.96,	{2,0,0,0}},
	{    2.01,	{2,0,0,-1}},
	{ -152.53,	{2,0,0,-2}},
	{  -34.07,	{2,0,0,-4}},
	{    2.96,	{3,0,0,2}},
	{   50.64,	{3,0,0,0}},
	{  -16.40,	{3,0,0,-2}},
	{    3.60,	{4,0,0,0}},
	{   -1.58,	{4,0,0,-2}},
	{   -1.59,	{0,1,0,4}},
	{  -25.10,	{0,1,0,2}},
	{   17.93,	{0,1,0,1}},
	{ -126.98,	{0,1,0,0}},
	{ -165.06,	{0,1,0,-2}},
	{   -6.46,	{0,1,0,-4}},
	{   -1.68,	{0,2,0,2}},
	{  -16.35,	{0,2,0,-2}},
	{  -11.75,	{1,1,0,2}},
	{    1.52,	{1,1,0,1}},
	{ -115.18,	{1,1,0,0}},
	{ -182.36,	{1,1,0,-2}},
	{   -9.66,	{1,1,0,-4}},
	{   -2.27,	{-1,1,0,4}},
	{  -23.59,	{-1,1,0,2}},
	{ -138.76,	{-1,1,0,0}},
	{  -31.70,	{-1,1,0,-2}},
	{   -1.53,	{-1,1,0,-4}},
	{  -10.56,	{2,1,0,0}},
	{   -7.59,	{2,1,0,-2}},
	{   -2.54,	{2,1,0,-4}},
	{    3.32,	{2,-1,0,2}},
	{   11.67,	{2,-1,0,0}},
	{   -6.12,	{1,2,0,-2}},
	{   -2.40,	{-1,2,0,2}},
	{   -2.32,	{-1,2,0,0}},
	{   -1.82,	{-1,2,0,-2}},
	{  -52.14,	{0,0,2,-2}},
	{   -1.67,	{0,0,2,-4}},
	{   -9.52,	{1,0,2,-2}},
	{  -85.13,	{-1,0,2,0}},
	{    3.37,	{-1,0,2,-2}},
	{   -2.26,	{0,1,2,-2}},
	{       0,	{0,0,0,0}},

	{   -0.725,	{0,0,0,1}},
	{    0.601,	{0,0,0,2}},
	{    0.394,	{0,0,0,3}},
	{    -.445,	{1,0,0,4}},
	{    0.455,	{1,0,0,1}},
	{    0.192,	{1,0,0,-3}},
	{    5.679,	{2,0,0,-2}},
	{    -.308,	{2,0,0,-4}},
	{    -.166,	{3,0,0,2}},
	{   -1.300,	{3,0,0,0}},
	{    0.258,	{3,0,0,-2}},
	{   -1.302,	{0,1,0,0}},
	{    -.416,	{0,1,0,-4}},
	{    -.740,	{0,2,0,-2}},
	{    0.787,	{1,1,0,2}},
	{    0.461,	{1,1,0,0}},
	{    2.056,	{1,1,0,-2}},
	{    -.471,	{1,1,0,-4}},
	{    -.443,	{-1,1,0,2}},
	{    0.679,	{-1,1,0,0}},
	{   -1.540,	{-1,1,0,-2}},
	{    0.259,	{2,1,0,0}},
	{    -.212,	{2,-1,0,2}},
	{    -.151,	{2,-1,0,0}},
	{        0,	{0,0,0,0}},

	{ -526.069,	{0,0,1,-2}},
	{   -3.352,	{0,0,1,-4}},
	{   44.297,	{1,0,1,-2}},
	{   -6.000,	{1,0,1,-4}},
	{   20.599,	{-1,0,1,0}},
	{  -30.598,	{-1,0,1,-2}},
	{  -24.649,	{-2,0,1,0}},
	{   -2.000,	{-2,0,1,-2}},
	{  -22.571,	{0,1,1,-2}},
	{   10.985,	{0,-1,1,-2}},
	{        0,	{0,0,0,0}},

	{    0.2607,	{0,0,0,4}},
	{   28.2333,	{0,0,0,2}},
	{    0.0433,	{1,0,0,4}},
	{    3.0861,	{1,0,0,2}},
	{  186.5398,	{1,0,0,0}},
	{   34.3117,	{1,0,0,-2}},
	{    0.6008,	{1,0,0,-4}},
	{    -.3000,	{0,1,0,2}},
	{    -.3997,	{0,1,0,0}},
	{    1.9178,	{0,1,0,-2}},
	{    0.0339,	{0,1,0,-4}},
	{   -0.9781,	{0,0,0,1}},
	{    0.2833,	{2,0,0,2}},
	{   10.1657,	{2,0,0,0}},
	{    -.3039,	{2,0,0,-2}},
	{    0.3722,	{2,0,0,-4}},
	{    0.0109,	{2,0,0,-6}},
	{    -.0484,	{1,1,0,2}},
	{    -.9490,	{1,1,0,0}},
	{    1.4437,	{1,1,0,-2}},
	{    0.0673,	{1,1,0,-4}},
	{    0.2302,	{1,-1,0,2}},
	{    1.1528,	{1,-1,0,0}},
	{    -.2257,	{1,-1,0,-2}},
	{    -.0102,	{1,-1,0,-4}},
	{    0.0918,	{0,2,0,-2}},
	{    -.0124,	{0,0,2,0}},
	{    -.1052,	{0,0,2,-2}},
	{    -.1093,	{1,0,0,1}},
	{    0.0118,	{1,0,0,-1}},
	{    -.0386,	{1,0,0,-3}},
	{    0.1494,	{0,1,0,1}},
	{    0.0243,	{3,0,0,2}},
	{    0.6215,	{3,0,0,0}},
	{    -.1187,	{3,0,0,-2}},
	{    -.1038,	{2,1,0,0}},
	{    -.0192,	{2,1,0,-2}},
	{    0.0324,	{2,1,0,-4}},
	{    0.0213,	{2,-1,0,2}},
	{    0.1268,	{2,-1,0,0}},
	{    -.0106,	{1,2,0,0}},
	{    0.0484,	{1,2,0,-2}},
	{    0.0112,	{1,-2,0,2}},
	{    0.0196,	{1,-2,0,0}},
	{    -.0212,	{1,-2,0,-2}},
	{    -.0833,	{1,0,2,-2}},
	{    -.0481,	{1,0,-2,2}},
	{    -.7136,	{1,0,-2,0}},
	{    -.0112,	{1,0,-2,-2}},
	{    -.0100,	{2,0,0,1}},
	{    0.0155,	{2,0,0,-1}},
	{    0.0164,	{1,1,0,1}},
	{    0.0401,	{4,0,0,0}},
	{    -.0130,	{4,0,0,-2}},
	{    0.0115,	{3,-1,0,0}},
	{    -.0141,	{2,0,-2,-2}},
	{         0,	{0,0,0,0}},
};
