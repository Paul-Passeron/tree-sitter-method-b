import XCTest
import SwiftTreeSitter
import TreeSitterMethodb

final class TreeSitterMethodbTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_methodb())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Methodb grammar")
    }
}
