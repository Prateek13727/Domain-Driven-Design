type customerInfo = {
  customer_id: int,
  customer_mobile: string,
  customer_name: string,
};


type tripInfo = {
  trip_started_time: Timestamp.t,
  trip_ended_time: Timestamp.t,
  trip_distance_kms: float,
  vehicle_number: string,
};

type baseOrder = {
  crn: string,
  customer_info: customerInfo,
  order_id: int,
  order_fare: float,
  order_status: OrderStatus.t,
  pickup_time: Timestamp.t,
  trip_fare: float,
  vehicle_type: string,
};

type t =
| Open(baseOrder)
| Accepted(baseOrder)
| Live(baseOrder)
| Completed(baseOrder, tripInfo)
| Cancelled(baseOrder);