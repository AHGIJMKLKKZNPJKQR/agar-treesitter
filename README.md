# Tree-sitter grammar for Agar agar

## Repo structure

Grammar spec is in [./grammar.js](./grammar.js) and extra metadata is in [./tree-sitter.json](./tree-sitter.json).

## Commands

Use `npm run generate` to generate the parser based on the grammar specification.

## Tests

Tests are in [./test/corpus/](./test/corpus/). Use `npm run parse <path-to-test>` to run the generated parser on a test.
