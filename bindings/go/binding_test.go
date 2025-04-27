package tree_sitter_method_b_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_method_b "github.com/tree-sitter/tree-sitter-methodB/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_method_b.Language())
	if language == nil {
		t.Errorf("Error loading MethodB grammar")
	}
}
