type t =
  | Open
  | Accepted
  | Live
  | Completed
  | Cancelled;

let fromString :(string) => t =
  fun
  | "open" => Open
  | "accepted" => Accepted
  | "live" => Live
  | "completed" => Completed
  | "cancelled" => Cancelled
  | anyOther => ErrorUtils.raiseError(
      ~path="OrderStatus.re",
      ~message="invalid order status",
      ~value=anyOther
  );

let toString = (status: t): string =>
  switch (status) {
  | Open => "open"
  | Accepted => "accepted"
  | Live => "live"
  | Completed => "completed"
  | Cancelled => "cancelled"
  };
