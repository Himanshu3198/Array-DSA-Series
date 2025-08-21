/*
// Definition for an Interval.
class Interval {
    public int start;
    public int end;

    public Interval() {}

    public Interval(int _start, int _end) {
        start = _start;
        end = _end;
    }
};
*/

class Solution {
    public List<Interval> employeeFreeTime(List<List<Interval>> schedule) {
        List<Interval> allIntervals = new ArrayList<>();
        for (List<Interval> emp : schedule) {
            allIntervals.addAll(emp);
        }

        // Sort by start time, then end time
        allIntervals.sort(
            Comparator.comparingInt((Interval in) -> in.start)
                      .thenComparingInt(in -> in.end)
        );

        List<Interval> ans = new ArrayList<>();
        int minTime = allIntervals.get(0).end;

        for (int i = 1; i < allIntervals.size(); i++) {
            Interval record = allIntervals.get(i);

            if (record.start > minTime) {
                ans.add(new Interval(minTime, record.start));
            }

            minTime = Math.max(minTime, record.end);
        }

        return ans;
    }
}
