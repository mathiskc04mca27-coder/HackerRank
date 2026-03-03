import java.util.*;

class Solution {
    
    public static void main(String[] argh) {
        Scanner sc = new Scanner(System.in);
        
        while (sc.hasNext()) {
            String input = sc.next();
            System.out.println(isBalanced(input));
        }
    }
    
    public static boolean isBalanced(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        for (int i = 0; i < s.length(); i++) {
            char current = s.charAt(i);
            
           
            if (current == '(' || current == '{' || current == '[') {
                stack.push(current);
            } 
        
            else {
               
                if (stack.isEmpty()) {
                    return false;
                }
                
                char top = stack.pop();
                
                
                if (current == ')' && top != '(') return false;
                if (current == '}' && top != '{') return false;
                if (current == ']' && top != '[') return false;
            }
        }
        
        
        return stack.isEmpty();
    }
}



