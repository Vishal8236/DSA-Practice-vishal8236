class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0;
        int lr = 0;
        
        for(auto ch : moves)
        {
            if(ch == 'L')
                lr++;
            else if(ch == 'R')
                lr--;
            else if(ch == 'U')
                ud++;
            else if(ch == 'D')
                ud--;
        }
        
        if(ud == 0 and lr == 0)
            return true;
        return false;
    }
};


Approach 2 - 


def judgeCircle(self, moves):
    return moves.count('L') == moves.count('R') and moves.count('U') == moves.count('D')


problem link - https://leetcode.com/problems/robot-return-to-origin/



There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

 

Example 1:

Input: moves = "UD"
Output: true
Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
Example 2:

Input: moves = "LL"
Output: false
Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.