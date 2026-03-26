class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n,0);
        stack<int> s;
        int prev_time = 0;

        for(const string& log : logs){
            int first_colon = log.find(':');
            int second_colon = log.find_last_of(':');

            int id = stoi(log.substr(0, first_colon));
            string status = log.substr(first_colon + 1, second_colon - first_colon - 1);
            int timestamp = stoi(log.substr(second_colon + 1));

            if (status == "start") {
                if (!s.empty()) {
                    result[s.top()] += (timestamp - prev_time);
                }
                s.push(id);
                prev_time = timestamp;
            } else {
                result[s.top()] += (timestamp - prev_time + 1);
                s.pop();
                prev_time = timestamp + 1;
            }
        }

        return result;
    }
};