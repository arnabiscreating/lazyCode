## Subdomain Visit Count

### 💻 Language(s)

<table>
    <tr>
        <td> C++</td>
        <td>✔️ Python</td>
        <td> Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/subdomain-visit-count/)

### 📖 Statement
A website domain `"discuss.leetcode.com"` consists of various subdomains. At the top level, we have `"com"`, at the next level, we have `"leetcode.com"` and at the lowest level, `"discuss.leetcode.com"`. When we visit a domain like `"discuss.leetcode.com"`, we will also visit the parent domains `"leetcode.com"` and `"com"` implicitly.

A count-paired domain is a domain that has one of the two formats `"rep d1.d2.d3"` or `"rep d1.d2"` where rep is the number of visits to the domain and d1.d2.d3 is the domain itself.

For example, `"9001 discuss.leetcode.com"` is a count-paired domain that indicates that `discuss.leetcode.com` was visited 9001 times.

Given an array of count-paired domains cpdomains, return an array of the count-paired domains of each subdomain in the input. You may return the answer in any order.


### ✍️ Solution

```Python
class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        di=dict()
        for sen in cpdomains:
            num = int(sen.split(" ")[0])
            dom = sen.split(" ")[1]
            li=dom.split(".")
            for i in range(len(li)):
                tot=".".join(li[i:len(li)])
                di[tot]=di.get(tot,0)+num
        fin=list()
        for key,val in di.items():
            fin.append(str(val)+" "+key)
        return fin
```
