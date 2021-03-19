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
  | _ => raise(Not_found);

let toString = (status: t): string =>
  switch (status) {
  | Open => "open"
  | Accepted => "accepted"
  | Live => "live"
  | Completed => "completed"
  | Cancelled => "cancelled"
  };
