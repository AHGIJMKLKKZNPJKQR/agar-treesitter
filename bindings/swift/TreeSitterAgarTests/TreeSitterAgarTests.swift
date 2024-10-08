import XCTest
import SwiftTreeSitter
import TreeSitterAgar

final class TreeSitterAgarTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_agar())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Agar grammar")
    }
}
