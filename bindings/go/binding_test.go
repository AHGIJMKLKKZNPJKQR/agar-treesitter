package tree_sitter_agar_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_agar "github.com/ahgijmklkkznpjkqr/agar-treesitter/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_agar.Language())
	if language == nil {
		t.Errorf("Error loading Agar grammar")
	}
}
