function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function (list1, list2) {
  if (!list1) return list2;
  if (!list2) return list1;

  let head;
  let current;

  if (list1.val <= list2.val) {
    head = list1;
    list1 = list1.next;
  } else {
    head = list2;
    list2 = list2.next;
  }

  current = head;
  console.log("antes do for", current);
  for (; list1 !== null && list2 !== null; ) {
    if (list1.val <= list2.val) {
      current.next = list1;
      list1 = list1.next;
    } else {
      current.next = list2;
      list2 = list2.next;
    }
    current = current.next;
  }
  current.next = list1 !== null ? list1 : list2;
  console.log("depois do for", current);
  return head;
};

const list1 = new ListNode(
  1,
  new ListNode(2, new ListNode(4, new ListNode(7)))
);
const list2 = new ListNode(1, new ListNode(3, new ListNode(4)));

mergeTwoLists(list1, list2);

var mergeTwoLists = function (list1, list2) {
  if (!list1) return list2;
  if (!list2) return list1;

  let current = list1.val <= list2.val ? list1 : list2;

  if (list1.val <= list2.val) {
    list1 = list1.next;
  } else {
    list2 = list2.next;
  }
  let tail = current;

  for (; list1 !== null && list2 !== null; ) {
    if (list1.val <= list2.val) {
      tail.next = list1;
      list1 = list1.next;
    } else {
      tail.next = list2;
      list2 = list2.next;
    }
    tail = tail.next;
  }
  tail.next = list1 !== null ? list1 : list2;

  return current;
};
