<!-- Transpiler Build According To The Rules Defined, or rather, Implied In This File -->

# This is MD To HTML Transpiler Template


<!-- H1-H6 Tags -->

<!-- H1-H6 Hash Tag-->
# H1 Tag
## H2 Tag
### H3 Tag
#### H4 Tag
##### H5 Tag
###### H6 Tag

<!-- H1-H6 Equal/Hyphen Tag -->
H1
=========
H2
---------


<!-- Italics Tag -->
*Italics Tag*
_Italics Tag_

<!-- Bold Tag -->
**Bold Tag**
__Bold Tag__

<!-- Bold and Italics Tag -->
***Both bold and italics***
**_Both bold and italics_**
*__Both bold and italics__*


<!-- Strike Through Text -->
~~StrikeThrough Text~~


<!-- Paragraph Tag -->
Paragraph 1. This is a bunch of text.
Paragraph 2. This is another bunch of text.


<!-- Paragraph Tag With Two Spaces At The End. Creates a line break -->
Paragraph 3. This has two spaces at its end. Select it and see.  


<!-- Quotes and Indents -->
<!-- Supports up to 5 levels of indent -->
> Quote 1.
>> Indent 1.
>>> Triple Indent

> Quote 2.
>> Indent 2.


<!-- Lists -->

<!-- Unordered Lists -->
* First item
* Second item

+ First item
+ Second item

- First item
- Second item

<!-- Ordered Lists -->
1. First item
2. Second item

1. First item
1. Second item

1. First item 
2. Second item
3. Third item
    * First sub item
    * Second sub item
4. Fourth item


<!-- Horizontal Line, ie. <hr> -->
***
-----
_ __ _
*****


<!-- Links -->

<!-- Inline Link -->
[This is a link!](http://osborngh.github.io/)

<!-- Link With Attribute -->
[This is a link with attribute!](http://osborngh.github.io/ "Link To My Personal Blog")

<!-- Relative Link -->
[This is a relative link](/tests/template.md/)

<!-- Reference Link -->
[This is a referenced link][reference-link]

<!-- Reference Link With Attribute -->
[This is a referenced link with an attribute][reference-link-with-attrib]

<!-- Backlinks To Reference -->
[reference-link]: http://osborngh.github.io/

<!-- Backlinks To Reference With Attrib -->
[reference-link-with-attrib]: http://osborngh.github.io/

<!-- URL or Email Short Links-->
<https://www.thisisashortlink.com>
<thisisashortlink@email.com>

<!-- Image Link -->
![Image Link](/criminals/images/backdoorboy.png)


<!-- Code -->

<!-- Inline Code -->
`print("This is an inline code snippet")`

<!-- Code Blocks -->

```bash
echo "This is a code block"
```