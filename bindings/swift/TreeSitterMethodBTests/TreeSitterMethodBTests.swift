import XCTest
import SwiftTreeSitter
import TreeSitterMethodB

final class TreeSitterMethodBTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_method_b())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading MethodB grammar")
    }
}
