<h2><a href="https://leetcode.com/problems/sort-characters-by-frequency/">451. Sort Characters By Frequency</a></h2><h3>Medium</h3><hr><div><p>Given a string <code>s</code>, so<snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1">rt it in </snippet></snippet><strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1">decreasing order</snippet></snippet></strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1"> based on the </snippet></snippet><strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1">frequency</snippet></snippet></strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1"> of the characters. The<snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033366" data-color="4"> </snippet></snippet></snippet><strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033366" data-color="4">frequency</snippet></snippet></snippet></strong><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow" data-snippet-id="6033370" data-color="1"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033366" data-color="4"> of a character is the number </snippet></snippet></snippet><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033366" data-color="4">of times it appears in the strin</snippet><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033366" data-color="4"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">g.</snippet></snippet></snippet></p><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">

</snippet></snippet><p><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">Return </snippet></snippet><em><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">the sorted string</snippet></snippet></em><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">. </snippet><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow " data-snippet-id="6033368" data-color="1"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">If there are multiple answers, return </snippet></snippet></snippet><em><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow " data-snippet-id="6033368" data-color="1"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">any of them</snippet></snippet></snippet></em><snippet class=""><snippet data-snippet="true" class="snippet-highlight snippet-highlight-yellow " data-snippet-id="6033368" data-color="1"><snippet data-snippet="true" class="snippet-highlight snippet-highlight-pink" data-snippet-id="6033371" data-color="4">.</snippet></snippet></snippet></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "tree"
<strong>Output:</strong> "eert"
<strong>Explanation:</strong> 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "cccaaa"
<strong>Output:</strong> "aaaccc"
<strong>Explanation:</strong> Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "Aabb"
<strong>Output:</strong> "bbAa"
<strong>Explanation:</strong> "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 5 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists of uppercase and lowercase English letters and digits.</li>
</ul>
</div>