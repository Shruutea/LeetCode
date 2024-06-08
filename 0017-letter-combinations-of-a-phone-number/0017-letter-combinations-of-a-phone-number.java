import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Solution {
    public void solve(int idx, String digits, String s, List<String> ans, Map<Character, String> map) {
        if (idx == digits.length()) {
            ans.add(s);
            return;
        }
        String letters = map.get(digits.charAt(idx));
        for (char ch : letters.toCharArray()) {
            solve(idx + 1, digits, s + ch, ans, map);
        }
    }

    public List<String> letterCombinations(String digits) {
        List<String> result = new ArrayList<>();
        if (digits == null || digits.length() == 0) {
            return result;
        }

        Map<Character, String> map = new HashMap<>();
        map.put('2', "abc");
        map.put('3', "def");
        map.put('4', "ghi");
        map.put('5', "jkl");
        map.put('6', "mno");
        map.put('7', "pqrs");
        map.put('8', "tuv");
        map.put('9', "wxyz");
        
        solve(0, digits, "", result, map);
        return result;
    }
}
