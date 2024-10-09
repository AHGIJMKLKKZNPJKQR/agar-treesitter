"let" @keyword
(primitive_type) @type.builtin

(number) @number
(boolean) @boolean

[
 ";"
 ","
 ":"
 "->"
 "=>"
] @punctuation.delimiter

[
 "["
 "]"
 "("
 ")"
] @punctuation.bracket

(parameter (identifier) @variable.parameter)
(function_definition name: (identifier) @function)
(application function: (identifier) @function.call)


