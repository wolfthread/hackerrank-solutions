def print_rangoli(size):
    buffer = []
    for i in range(size):
        buffer.append('-'+chr(i + 97))
    prev = ''
    # creating store for backwards run
    store = []
    fill_length = 4 * size - 3
    for i in range(size):
        curr = prev + buffer.pop(len(buffer)-1)
        # printing current concatenated to the previous in reverse
        whole_line = (curr + '-' + prev[::-1]).center(fill_length, '-')
        if i == size-1:
            # removing exceeding dashes
            whole_line = whole_line[1:len(whole_line)-1]
        print(whole_line)
        store.append(whole_line)
        prev = curr
    # removing last line for duplicate
    del store[len(store)-1]
    # reversing order of lines
    store.reverse()
    for line in store:
        print(line)

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)