# Have the function

# ArrayChallenge (strAzz) read the strarr

# parameter being passed which will represent a full day and will be filled with events that span from time X to time Y in the day. The format of each event will be hh:mmAM/PM- hh:mmAM/PM. For example, strazz may be ["10:00AM-12:30PM","02:00PM- 02:45PM","09:10AM-09:50AM"]. Your program will have to output the longest amount of free time available between the start of your first event and the end of your last event in the format: hh:mm. The start event should be the earliest event in the day and the latest event should be the latest event in the day. The output for the previous input would therefore be 01:30 (with the earliest event in the day starting at 09:10AM and the latest event ending at 02:45PM). The input will contain at least 3 events and the events may be out of order.

# Examples

# Input: ["12:15PM-02:00PM", "09:00AM-10:00AM", "10:30AM-12:00PM"]
# Output: 00:30

# Input: ["12:15PM-02:00PM", "09:00AM- 12:11PM","02:02PM-04:00PM"] 
# Output: 00:04

# def ArrayChallenge (strArr):

# # code goes here 
#   return strArr

from datetime import datetime

def ArrayChallenge(strArr):
    # Function to convert time strings to datetime objects
    def convert_to_datetime(time_str):
        time_format = "%I:%M%p"
        return datetime.strptime(time_str, time_format)

    # Sort the events by start time
    events = sorted(strArr, key=lambda x: convert_to_datetime(x.split("-")[0]))

    max_free_time = 0

    # Calculate the free time between events
    for i in range(1, len(events)):
        start_time = convert_to_datetime(events[i - 1].split("-")[1])
        end_time = convert_to_datetime(events[i].split("-")[0])
        free_time = end_time - start_time
        if free_time > max_free_time:
            max_free_time = free_time

    # Format and return the result as "hh:mm"
    hours, remainder = divmod(max_free_time.total_seconds(), 3600)
    minutes, _ = divmod(remainder, 60)
    return f"{int(hours):02d}:{int(minutes):02d}"


def withoutDateTime(strArr):
    def convert_to_minutes(strTime):
        hours = int(strTime.split(":")[0])
        minutes = int(strTime.split(":")[1][0:2])
        AMorPM = strTime.split(":")[1][2:4]

        # 12AM and 12PM edge case
        if (hours == 12):
            if(AMorPM == "AM"):
                return minutes
            else:
                return 12 * 60 + minutes
            
        if (AMorPM == "AM"):
            return hours * 60 + minutes
        else:
            return (hours + 12) * 60 + minutes
       
    
    sortedList = sorted(strArr, key=lambda event: convert_to_minutes(event.split("-")[0]))

    maxInterval = 0

    for i in range(len(sortedList) - 1):
        currentInterval = convert_to_minutes(sortedList[i+1].split("-")[0]) - convert_to_minutes(sortedList[i].split("-")[1])
        maxInterval = max(maxInterval, currentInterval)
    
    hours = maxInterval // 60
    minutes = maxInterval % 60

    HH = f"{hours:02}"
    MM = f"{minutes:02}"

    return f"{HH}:{MM}"

    

# Input from standard input (you can replace this with your own list of events)
# input_list = input().split(",")
input_list = ["12:15PM-02:00PM", "09:00AM- 12:11PM","02:02PM-04:00PM"] 

# Call the ArrayChallenge function and print the result
print(withoutDateTime(input_list))

number = 2
formatted_number = f"{number:#^10}"
print(formatted_number)

