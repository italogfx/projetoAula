class ListStack(object):

    def __init__(self):
        self.stack = []
        self._size = 0

    def __len__(self):

        return self._size

    def clear(self):
        
        self.stack.clear()
        self._size = 0
        return self.stack

    def isEmpty(self):
        if self.stack:
            return False
        else:
            return True

    def push(self, item):

        self.stack.append(item)
        self._size += 1

    def pop(self):

        if self.stack:
            self.stack.pop()
            self._size -= 1
        else:
            raise IndexError("The stack is empty")

    def peek(self):

        if self.stack:
            return self.stack[-1]
        else:
            raise IndexError("The stack is empty")

    def __repr__(self):
        r = ""
        i = len(self.stack) - 1
        while i >= 0:
            r =r + str(self.stack[i]) + "\n"
            i -= 1
        return r

    def __str__(self):
        return self.__repr__()
        
