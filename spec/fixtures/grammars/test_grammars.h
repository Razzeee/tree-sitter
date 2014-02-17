#ifndef TreeSitter_test_grammars_h
#define TreeSitter_test_grammars_h

#include "tree_sitter/compiler.h"

namespace test_grammars {
    tree_sitter::Grammar arithmetic();
    tree_sitter::Grammar json();
}

#endif