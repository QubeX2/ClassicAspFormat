#pragma once
//
// Author: Mikael Andersson
// License: MIT
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cerrno>

namespace ClassicAspFormat {
    struct State {
        enum Code
        {
            WHITESPACE,
        };

        enum Mode
        {
            HTML,
            CSS,
            JAVASCRIPT,
            ASP
        };
    };
}