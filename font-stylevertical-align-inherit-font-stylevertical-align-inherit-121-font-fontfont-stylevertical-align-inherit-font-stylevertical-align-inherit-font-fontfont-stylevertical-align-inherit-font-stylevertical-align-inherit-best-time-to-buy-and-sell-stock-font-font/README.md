<h2><a href="https://leetcode.com/problems/best-time-to-buy-and-sell-stock/"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">121</font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">. </font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Best Time to Buy and Sell Stock</font></font></a></h2><h3>Easy</h3><hr><div><p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">You are given an array </font></font><code>prices</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> where </font></font><code>prices[i]</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> is the price of a given stock on the </font><font style="vertical-align: inherit;"> day.</font></font><code>i<sup>th</sup></code><font style="vertical-align: inherit;"></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">You want to maximize your profit by choosing a </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">single day</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> to buy one stock and choosing a </font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">different day in the future</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> to sell that stock.</font></font></p>

<p><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Return </font></font><em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">the maximum profit you can achieve from this transaction</font></font></em><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">. If you cannot achieve any profit, return </font></font><code>0</code><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">.</font></font></p>

<p>&nbsp;</p>
<p><strong class="example"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 1:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> prices = [7,1,5,3,6,4]
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 5
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.</font></font><font></font><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.</font></font><font></font>
</pre>

<p><strong class="example"><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Example 2:</font></font></strong></p>

<pre><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Input:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> prices = [7,6,4,3,1]
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Output:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> 0
</font></font><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Explanation:</font></font></strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;"> In this case, no transactions are done and the max profit = 0.
</font></font></pre>

<p>&nbsp;</p>
<p><strong><font style="vertical-align: inherit;"><font style="vertical-align: inherit;">Constraints:</font></font></strong></p>

<ul>
	<li><code>1 &lt;= prices.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= prices[i] &lt;= 10<sup>4</sup></code></li>
</ul>
</div>