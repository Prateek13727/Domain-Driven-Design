type t = {
  cycle_transactions: list(CycleTransaction.t),
  cycle_orders: CycleOrders.t,
  cycle_duration: CycleDuration.t,
  date_of_generation: Timestamp.t
};