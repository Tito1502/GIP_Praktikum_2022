// Datei: gip_mini_catch_heap_alloc.h
// Autor: Andreas Cla�en
// Version: 1.0

#pragma once

#include "gip_mini_catch.h"

#define delete Catch::Session::get_delete_count()++;
